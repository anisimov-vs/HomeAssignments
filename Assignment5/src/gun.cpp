// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include "gun.h"

void Gun::setAmmo(int ammo) {
    _ammo = ammo;
}

int Gun::getAmmo() const {
    return _ammo;
}


void Gun::setDamage(int damage) {
    _damage = damage;
}

int Gun::getDamage() const {
    return _damage;
}


void Gun::setRange(int range) {
    _range = range;
}

int Gun::getRange() const {
    return _range;
}

bool Gun::fire() {
    return _ammo-- > 0;
}

std::ostream& operator<<(std::ostream& os, const Gun& gun) {
    os << "Gun Ammo: " << gun.getAmmo() << std::endl;
    os << "Gun Damage: " << gun.getDamage() << std::endl;
    os << "Gun Range: " << gun.getRange();
    
    return os;
}

bool operator>(const Gun& gun1, const Gun& gun2) {
    return gun1.getDamage() > gun2.getDamage();
}

bool operator<(const Gun& gun1, const Gun& gun2) {
    return gun1.getDamage() < gun2.getDamage();
}

bool operator==(const Gun& gun1, const Gun& gun2) {
    return gun1.getDamage() == gun2.getDamage();
}