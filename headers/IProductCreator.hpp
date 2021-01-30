#pragma once
#include "IProduct.hpp"

#include <string>

class IProductCreator {
public:
    virtual ~IProductCreator(){};
    virtual IProduct* createProduct(std::string productTitle) = 0;

};
