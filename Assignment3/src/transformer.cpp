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

int Transformer::getHealth() {
    return _health;
}

void Transformer::setFuel(int fuel) {
    _fuel = fuel;
}

int Transformer::getFuel() {
    return _fuel;
}

void Transformer::setStrength(int strength) {
    _strength = strength;
}

int Transformer::getStrength() {
    return _strength;
}

void Transformer::setLevel(int level) {
    _level = level;
}

int Transformer::getLevel() {
    return _level;
}

void Transformer::setName(std::string name) {
    _name = name;
}

std::string Transformer::getName() {
    return _name;
}

void Transformer::setDirection(enum Direction dir) {
    _direction = dir;
}

Direction Transformer::getDirection() {
    return _direction;
}

void Transformer::setGun(Gun* gun) {
    _gun = gun;
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
