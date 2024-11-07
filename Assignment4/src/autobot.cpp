// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

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

Eye Autobot::getEye() const {
    return _eye;
}

void Autobot::setShield(int shield) {
    _shield = shield;
}

int Autobot::getShield() const {
    return _shield;
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << (Transformer&)autobot << std::endl;

    os << "Class: Autobot" << std::endl;
    os << "Eye: " << autobot.getEye() << std::endl;
    os << "Shield: " << autobot.getShield();
    
    return os;
}

bool operator>(const Autobot& autobot1, const Autobot& autobot2) {
    return autobot1.getShield() > autobot2.getShield();
}

bool operator<(const Autobot& autobot1, const Autobot& autobot2) {
    return autobot1.getShield() < autobot2.getShield();
}

bool operator==(const Autobot& autobot1, const Autobot& autobot2) {
    return autobot1.getShield() == autobot2.getShield();
}