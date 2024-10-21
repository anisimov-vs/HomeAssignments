#include <gtest/gtest.h>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "dinobot.h"

// Test cases for Transformer class
TEST(TransformerTest, Initialization) {
    Transformer transformer;
    EXPECT_EQ(transformer.getDirection(), Direction::North);
    EXPECT_EQ(transformer.getName(), "Transformer 404");
    EXPECT_EQ(transformer.getLevel(), 10);
    EXPECT_EQ(transformer.getStrength(), 10);
    EXPECT_EQ(transformer.getFuel(), 100);
    EXPECT_EQ(transformer.getHealth(), 100);
}

TEST(TransformerTest, SettersAndGetters) {
    Transformer transformer;
    transformer.setHealth(50);
    EXPECT_EQ(transformer.getHealth(), 50);

    transformer.setFuel(75);
    EXPECT_EQ(transformer.getFuel(), 75);

    transformer.setStrength(20);
    EXPECT_EQ(transformer.getStrength(), 20);

    transformer.setLevel(15);
    EXPECT_EQ(transformer.getLevel(), 15);

    transformer.setName("Optimus Prime");
    EXPECT_EQ(transformer.getName(), "Optimus Prime");

    Gun* newGun = new Gun();
    transformer.setGun(newGun);
    transformer.setRange(500);
    EXPECT_EQ(transformer.getRange(), 500);

    transformer.setAmmo(20);
    EXPECT_EQ(transformer.getAmmo(), 20);

    transformer.setDamage(50);
    EXPECT_EQ(transformer.getDamage(), 50);

    transformer.setDirection(Direction::South);
    EXPECT_EQ(transformer.getDirection(), Direction::South);
}

TEST(TransformerTest, MoveAndTurn) {
    Transformer transformer;
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.turn(Direction::East));
    EXPECT_EQ(transformer.getDirection(), Direction::East);
}

TEST(TransformerTest, Fire) {
    Transformer transformer;
    transformer.setAmmo(10);
    EXPECT_TRUE(transformer.fire());
    EXPECT_EQ(transformer.getAmmo(), 9);
}

// Test cases for Autobot class
TEST(AutobotTest, Initialization) {
    Autobot autobot;
    EXPECT_EQ(autobot.getDirection(), Direction::North);
    EXPECT_EQ(autobot.getName(), "Autobot 404");
    EXPECT_EQ(autobot.getLevel(), 10);
    EXPECT_EQ(autobot.getStrength(), 10);
    EXPECT_EQ(autobot.getFuel(), 100);
    EXPECT_EQ(autobot.getHealth(), 100);
    EXPECT_EQ(autobot.getEye(), Eye::Blue);
    EXPECT_EQ(autobot.getShield(), 10);
}

TEST(AutobotTest, SettersAndGetters) {
    Autobot autobot;
    autobot.setEye(Eye::Green);
    EXPECT_EQ(autobot.getEye(), Eye::Green);

    autobot.setShield(20);
    EXPECT_EQ(autobot.getShield(), 20);
}

TEST(AutobotTest, TransformAndProtect) {
    Autobot autobot;
    EXPECT_TRUE(autobot.transform());
    EXPECT_TRUE(autobot.protect());
}

// Test cases for Decepticon class
TEST(DecepticonTest, Initialization) {
    Decepticon decepticon;
    EXPECT_EQ(decepticon.getDirection(), Direction::North);
    EXPECT_EQ(decepticon.getName(), "Decepticon 404");
    EXPECT_EQ(decepticon.getLevel(), 10);
    EXPECT_EQ(decepticon.getStrength(), 10);
    EXPECT_EQ(decepticon.getFuel(), 100);
    EXPECT_EQ(decepticon.getHealth(), 100);
    EXPECT_EQ(decepticon.getEye(), Eye::Red);
    EXPECT_EQ(decepticon.getForce(), 10);
}

TEST(DecepticonTest, SettersAndGetters) {
    Decepticon decepticon;
    decepticon.setEye(Eye::Yellow);
    EXPECT_EQ(decepticon.getEye(), Eye::Yellow);

    decepticon.setForce(20);
    EXPECT_EQ(decepticon.getForce(), 20);
}

TEST(DecepticonTest, TransformAndAttack) {
    Decepticon decepticon;
    EXPECT_TRUE(decepticon.transform());
    EXPECT_TRUE(decepticon.attack());
}

// Test cases for Dinobot class
TEST(DinobotnTest, Initialization) {
    Dinobot dinobot;
    EXPECT_EQ(dinobot.getDirection(), Direction::North);
    EXPECT_EQ(dinobot.getName(), "Dinobot 404");
    EXPECT_EQ(dinobot.getLevel(), 10);
    EXPECT_EQ(dinobot.getStrength(), 10);
    EXPECT_EQ(dinobot.getFuel(), 100);
    EXPECT_EQ(dinobot.getHealth(), 100);
    EXPECT_EQ(dinobot.getEye(), Eye::Green);
    EXPECT_EQ(dinobot.getIntensity(), 10);
}

TEST(DinobotTest, SettersAndGetters) {
    Dinobot dinobot;
    dinobot.setEye(Eye::Cyan);
    EXPECT_EQ(dinobot.getEye(), Eye::Cyan);

    dinobot.setIntensity(20);
    EXPECT_EQ(dinobot.getIntensity(), 20);
}

TEST(DinobotTest, TransformAndAttack) {
    Dinobot dinobot;
    EXPECT_TRUE(dinobot.transform());
    EXPECT_TRUE(dinobot.roar());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}