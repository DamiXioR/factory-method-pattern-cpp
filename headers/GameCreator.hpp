#pragma once
#include "Game.hpp"
#include "IProductCreator.hpp"

#include <string>

class GameCreator : public IProductCreator {
public:
    ~GameCreator(){};
    IProduct* createProduct(std::string productTitle);
};
