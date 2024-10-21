#include "gun.h"
#include <iostream>


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