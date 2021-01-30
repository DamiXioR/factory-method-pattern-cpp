#include <Game.hpp>
#include <GameCreator.hpp>
#include <Movie.hpp>
#include <MovieCreator.hpp>

#include <iostream>
#include <string>

int main()
{
    IProductCreator* productCreator = nullptr;
    IProduct* product = nullptr;
    std::string shouldCreate = "";
    bool shouldFreeMemory = true;

    while (shouldCreate != "q") {
        std::cout << "Input: game + game title OR movie + movie title OR q for quit\n";
        std::getline(std::cin, shouldCreate);

        if (!shouldCreate.find("game")) {
            std::cout << "Game Creator!\n";
            shouldCreate = shouldCreate.replace(shouldCreate.find("game"), std::string("game").length(), "");
            productCreator = new GameCreator();
            product = new Game(shouldCreate);
            shouldFreeMemory = true;
        }
        else if (!shouldCreate.find("movie")) {
            std::cout << "Movie Creator!\n";
            shouldCreate = shouldCreate.replace(shouldCreate.find("movie"), std::string("movie").length(), "");
            productCreator = new MovieCreator();
            product = new Movie(shouldCreate);
            shouldFreeMemory = true;
        }
        else if (shouldCreate == "q") {
            shouldFreeMemory = false;
            break;
        }
        else {
            shouldFreeMemory = false;
            std::cout << "Don't understand!\n";
        }

        if (shouldFreeMemory) {
            std::cout << "Already created: " << product->getTitle() << "\n";
            delete productCreator;
            delete product;
        }
    }

    return 0;
}
