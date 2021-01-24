#pragma once
#include "IProductCreator.hpp"
#include "Movie.hpp"

class MovieCreator: public IProductCreator {
public:
    IProduct* createProduct();
};