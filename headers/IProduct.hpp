#pragma once
#include <string>

class IProduct {
public:
    IProduct(std::string productTitle);
    std::string getTitle() const {
        return title_;
    }

protected:
    std::string title_;
};
