#include "GameCreator.hpp"

IProduct* createProduct(std::string productTitle) {
    return new Game(productTitle);
}