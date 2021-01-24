#pragma once
#include "IProductCreator.hpp"
#include "Movie.hpp"

#include <string>

class MovieCreator: public IProductCreator {
public:
    IProduct* createProduct(std::string productTitle);
};
