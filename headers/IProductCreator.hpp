#pragma once
#include "IProduct.hpp"

class IProductCreator {
public:
    virtual IProduct* createProduct() = 0;
    
};