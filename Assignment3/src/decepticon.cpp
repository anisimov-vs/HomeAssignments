// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 3

#include "decepticon.h"

bool Decepticon::transform() {
    return true;
}

bool Decepticon::attack() {
    return _force-- > 0;
}

void Decepticon::setEye(Eye eye) {
    _eye = eye;
}

Eye Decepticon::getEye() {
    return _eye;
}

void Decepticon::setForce(int shield) {
    _force = shield;
}

int Decepticon::getForce() {
    return _force;
}