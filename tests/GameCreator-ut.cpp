#include <gtest/gtest.h>

#include "GameCreator.hpp"
#include "IProduct.hpp"

#include <string>

class GameCreatorTest : public ::testing::Test {
public:
    const std::string uoTitle = "Ultima Online";
    const std::string uoGame = "Ultima Online _game";
};

TEST_F(GameCreatorTest, ShouldReturnGameClassObjectWithNameFollowedByPostfix)
{
    GameCreator* gameCreatorPointer = new GameCreator();
    IProduct* ultimaOnlinePointer = gameCreatorPointer->createProduct(uoTitle);
    EXPECT_EQ(ultimaOnlinePointer->getTitle(), uoGame);
    delete ultimaOnlinePointer;
    delete gameCreatorPointer;
}
