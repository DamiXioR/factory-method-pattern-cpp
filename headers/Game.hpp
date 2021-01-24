#pragma once
#include "IProduct.hpp"

#include <string>

class Game : public IProduct {
public:
    Game(std::string gameTitle);
};
