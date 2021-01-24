#pragma once
#include "IProduct.hpp"

#include <string>

class Movie: public IProduct {
public:
    Movie(std::string movieTitle);
};
