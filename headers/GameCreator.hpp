#pragma once
#include "IProductCreator.hpp"
#include "Game.hpp"

class GameCreator: public IProductCreator {
public:
    IProduct* createProduct();
};