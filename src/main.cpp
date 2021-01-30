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
    bool isNotQuit = true;

    while (shouldCreate != "q") {
        std::cout << "Input: game + game title OR movie + movie title OR q for quit\n";
        std::getline(std::cin, shouldCreate);

        if (!shouldCreate.find("game")) {
            std::cout << "Game Creator!\n";
            shouldCreate = shouldCreate.replace(shouldCreate.find("game"), std::string("game").length(), "");
            productCreator = new GameCreator();
            product = new Game(shouldCreate);
        }
        else if (!shouldCreate.find("movie")) {
            std::cout << "Movie Creator!\n";
            shouldCreate = shouldCreate.replace(shouldCreate.find("movie"), std::string("movie").length(), "");
            productCreator = new MovieCreator();
            product = new Movie(shouldCreate);
        }
        else if (shouldCreate == "q") {
            isNotQuit = false;
            break;
        }
        else {
            std::cout << "Don't understand!\n";
        }

        std::cout << "Already created: " << product->getTitle() << "\n";
        if (isNotQuit) {
            delete productCreator;
            delete product;
        }
    }

    return 0;
}
