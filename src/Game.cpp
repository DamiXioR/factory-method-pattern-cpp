#include "Game.hpp"

Game::Game(std::string gameTitle)
    : IProduct(gameTitle)
{
    title_.append(" _game");
}
