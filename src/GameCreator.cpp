#include "GameCreator.hpp"

IProduct* GameCreator::createProduct(std::string productTitle)
{
    IProduct* createdGame = new Game (productTitle);
    return createdGame;
}