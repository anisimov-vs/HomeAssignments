// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include "transformer.h"

bool Transformer::move() {
    return true;
}

bool Transformer::turn(enum Direction dir) {
    _direction = dir;
    return true;
}

bool Transformer::jump() {
    return true;   
}


void Transformer::setHealth(int health) {
    _health = health;
}

int Transformer::getHealth() const {
    return _health;
}

void Transformer::setFuel(int fuel) {
    _fuel = fuel;
}

int Transformer::getFuel() const {
    return _fuel;
}

void Transformer::setStrength(int strength) {
    _strength = strength;
}

int Transformer::getStrength() const {
    return _strength;
}

void Transformer::setLevel(int level) {
    _level = level;
}

int Transformer::getLevel() const {
    return _level;
}

void Transformer::setName(std::string name) {
    _name = name;
}

std::string Transformer::getName() const {
    return _name;
}

void Transformer::setDirection(enum Direction dir) {
    _direction = dir;
}

Direction Transformer::getDirection() const {
    return _direction;
}

void Transformer::setGun(Gun* gun) {
    _gun = gun;
}

Gun* Transformer::getGun() const {
    return _gun;
}

void Transformer::setRange(int range) {
    _gun->setRange(range);
}

int Transformer::getRange() const {
    return _gun->getRange();
}

void Transformer::setAmmo(int ammo) {
    _gun->setAmmo(ammo);
}

int Transformer::getAmmo() const {
    return _gun->getAmmo();
}

bool Transformer::fire() {
    return _gun->fire();
}

void Transformer::setDamage(int damage) {
    _gun->setDamage(damage);
}

int Transformer::getDamage() const {
    return _gun->getDamage();
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer Name: " << transformer.getName() << std::endl;
    os << "Level: " << transformer.getLevel() << std::endl;
    os << "Strength: " << transformer.getStrength() << std::endl;
    os << "Fuel: " << transformer.getFuel() << std::endl;
    os << "Health: " << transformer.getHealth() << std::endl;
    os << "Direction: " << transformer.getDirection() << std::endl;
    os << *transformer.getGun();

    return os;
}

bool operator>(const Transformer& transformer1, const Transformer& transformer2) {
    return transformer1.getStrength() > transformer2.getStrength();
}

bool operator<(const Transformer& transformer1, const Transformer& transformer2) {
    return transformer1.getStrength() < transformer2.getStrength();
}

bool operator==(const Transformer& transformer1, const Transformer& transformer2) {
    return transformer1.getStrength() == transformer2.getStrength();
}