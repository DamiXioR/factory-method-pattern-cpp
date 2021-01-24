#include <gtest/gtest.h>
#include "MovieCreator.hpp"

class MovieTest : public ::testing::Test {
public:
    const std::string alienTitle = "Alien: the 8th passenger";
    const std::string alienMovie = "Alien: the 8th passenger _movie";
};

TEST_F(MovieTest, ShouldCreateMovieClassObjectWithNameFollowedByPostfix)
{
    Movie* alien = new Movie(alienTitle);
    EXPECT_EQ(alien->getTitle(), alienMovie);
    delete alien;
}
