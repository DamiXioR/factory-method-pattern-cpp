#include "MovieCreator.hpp"

IProduct* MovieCreator::createProduct(std::string movieTitle)
{
    return new Movie(movieTitle);
}