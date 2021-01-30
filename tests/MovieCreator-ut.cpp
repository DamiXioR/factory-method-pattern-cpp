#include <gtest/gtest.h>

#include "MovieCreator.hpp"
#include "IProduct.hpp"

#include <string>

class MovieCreatorTest : public ::testing::Test {
public:
    const std::string alienTitle = "Alien";
    const std::string alienMovie = "Alien _movie";
};

TEST_F(MovieCreatorTest, ShouldReturnGameClassObjectWithNameFollowedByPostfix)
{
    MovieCreator* movieCreatorPointer = new MovieCreator();
    IProduct* alienPointer = movieCreatorPointer->createProduct(alienTitle);
    EXPECT_EQ(alienPointer->getTitle(), alienMovie);
    delete alienPointer;
    delete movieCreatorPointer;
}
