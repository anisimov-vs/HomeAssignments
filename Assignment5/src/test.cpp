// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include <gtest/gtest.h>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "dinobot.h"


// Test cases for Gun class
TEST(GunTest, Initialization) {
    Gun gun;

    EXPECT_EQ(gun.getDamage(), 10);
    EXPECT_EQ(gun.getRange(), 10);
    EXPECT_EQ(gun.getAmmo(), 100);
}

TEST(GunTest, SettersAndGetters) {
    Gun gun;

    gun.setDamage(20);
    EXPECT_EQ(gun.getDamage(), 20);

    gun.setRange(20);
    EXPECT_EQ(gun.getRange(), 20);

    gun.setAmmo(200);
    EXPECT_EQ(gun.getAmmo(), 200);
}

TEST(GunTest, Fire) {
    Gun gun;

    EXPECT_TRUE(gun.fire());
}

TEST(GunTest, OverloadingOutput) {
    Gun gun;

    std::stringstream oss;
    oss << gun;

    EXPECT_EQ(oss.str(), "Gun Ammo: 100\nGun Damage: 10\nGun Range: 10");
}

TEST(GunTest, OverloadingComparison) {
    Gun gun1, gun2;

    EXPECT_TRUE(gun1 == gun2);

    gun1.setDamage(20);

    EXPECT_TRUE(gun1 > gun2);
    EXPECT_FALSE(gun1 < gun2);
}

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

TEST(TransformerTest, OverloadingOutput) {
    Transformer transformer;
    
    std::ostringstream oss;
    oss << transformer;

    EXPECT_EQ(oss.str(), "Transformer Name: Transformer 404\nLevel: 10\nStrength: 10\nFuel: 100\nHealth: 100\nDirection: North\nGun Ammo: 100\nGun Damage: 10\nGun Range: 10");
}

TEST(TransformerTest, OverloadingComparison) {
    Transformer transformer1, transformer2;

    EXPECT_TRUE(transformer1 == transformer2);

    transformer1.setStrength(20);

    EXPECT_TRUE(transformer1 > transformer2);
    EXPECT_FALSE(transformer1 < transformer2);
}

TEST(TransformerTest, TransformOpenFireUlta) {
    Transformer transformer;

    EXPECT_EQ(transformer.transform(), "Method: Transform\n");
    EXPECT_EQ(transformer.openFire(), "Method: OpenFire\n");
    EXPECT_EQ(transformer.ulta(), "Method: Ulta\n");
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

    EXPECT_TRUE(autobot.protect());
}

TEST(AutobotTest, OverloadingOutput) {
    Autobot autobot;
    
    std::ostringstream oss;
    oss << autobot;

    EXPECT_EQ(oss.str(), "Transformer Name: Autobot 404\nLevel: 10\nStrength: 10\nFuel: 100\nHealth: 100\nDirection: North\nGun Ammo: 100\nGun Damage: 10\nGun Range: 10\nClass: Autobot\nEye: Blue\nShield: 10");
}

TEST(AutobotTest, OverloadingComparison) {
    Autobot autobot1, autobot2;

    EXPECT_TRUE(autobot1 == autobot2);

    autobot1.setShield(20);

    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_FALSE(autobot1 < autobot2);
}

TEST(AutobotTest, TransformOpenFireUlta) {
    Autobot autobot;

    EXPECT_EQ(autobot.transform(), "Class: Autobot\nMethod: Transform\n");
    EXPECT_EQ(autobot.openFire(), "Class: Autobot\nMethod: OpenFire\n");
    EXPECT_EQ(autobot.ulta(), "Class: Autobot\nMethod: Ulta\n");
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

TEST(DecepticonTest, OverloadingOutput) {
    Decepticon decepticon;
    
    std::ostringstream oss;
    oss << decepticon;

    EXPECT_EQ(oss.str(), "Transformer Name: Decepticon 404\nLevel: 10\nStrength: 10\nFuel: 100\nHealth: 100\nDirection: North\nGun Ammo: 100\nGun Damage: 10\nGun Range: 10\nClass: Decepticon\nEye: Red\nForce: 10");
}

TEST(DecepticonTest, OverloadingComparison) {
    Decepticon decepticon1, decepticon2;

    EXPECT_TRUE(decepticon1 == decepticon2);

    decepticon1.setForce(20);

    EXPECT_TRUE(decepticon1 > decepticon2);
    EXPECT_FALSE(decepticon1 < decepticon2);
}

TEST(DecepticonTest, TransformOpenFireUlta) {
    Decepticon decepticon;

    EXPECT_EQ(decepticon.transform(), "Class: Decepticon\nMethod: Transform\n");
    EXPECT_EQ(decepticon.openFire(), "Class: Decepticon\nMethod: OpenFire\n");
    EXPECT_EQ(decepticon.ulta(), "Class: Decepticon\nMethod: Ulta\n");
}

// Test cases for Dinobot class
TEST(DinobotTest, Initialization) {
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

    EXPECT_TRUE(dinobot.roar());
}

TEST(DinobotTest, Overloadings) {
    Dinobot dinobot;
    
    std::ostringstream oss;
    oss << dinobot;

    EXPECT_EQ(oss.str(), "Transformer Name: Dinobot 404\nLevel: 10\nStrength: 10\nFuel: 100\nHealth: 100\nDirection: North\nGun Ammo: 100\nGun Damage: 10\nGun Range: 10\nClass: Dinobot\nEye: Green\nIntensity: 10");
}

TEST(DinobotTest, OverloadingComparison) {
    Dinobot dinobot1, dinobot2;

    EXPECT_TRUE(dinobot1 == dinobot2);

    dinobot1.setIntensity(20);
    
    EXPECT_TRUE(dinobot1 > dinobot2);
    EXPECT_FALSE(dinobot1 < dinobot2);
}

TEST(DinobotTest, TransformOpenFireUlta) {
    Dinobot dinobot;

    EXPECT_EQ(dinobot.transform(), "Class: Dinobot\nMethod: Transform\n");
    EXPECT_EQ(dinobot.openFire(), "Class: Dinobot\nMethod: OpenFire\n");
    EXPECT_EQ(dinobot.ulta(), "Class: Dinobot\nMethod: Ulta\n");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
