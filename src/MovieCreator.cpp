#include "MovieCreator.hpp"

IProduct* createProduct(std::string movieTitle) {
    return new Movie(movieTitle);
}