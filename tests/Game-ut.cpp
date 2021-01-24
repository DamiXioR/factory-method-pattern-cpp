#include <gtest/gtest.h>
#include "Game.hpp"

class GameTest : public ::testing::Test {
public:
    const std::string uoTitle = "Ultima Online";
    const std::string uoGame = "Ultima Online _game";
};

TEST_F(GameTest, ShouldCreateGameClassObjectWithNameFollowedByPostfix)
{
    Game* ultimaOnline = new Game(uoTitle);
    EXPECT_EQ(ultimaOnline->getTitle(), uoGame);
    delete ultimaOnline;
}
