#include "autobot.h"

bool Autobot::transform() {
    return true;
}

bool Autobot::protect() {
    return _shield-- > 0;
}

void Autobot::setEye(Eye eye) {
    _eye = eye;
}

Eye Autobot::getEye() {
    return _eye;
}

void Autobot::setShield(int shield) {
    _shield = shield;
}

int Autobot::getShield() {
    return _shield;
}