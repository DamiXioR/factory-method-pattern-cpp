#pragma once
#include "IProductCreator.hpp"
#include "Game.hpp"

#include <string>

class GameCreator: public IProductCreator {
public:
    IProduct* createProduct(std::string productTitle);
};
