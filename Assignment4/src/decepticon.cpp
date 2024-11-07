// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

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

Eye Decepticon::getEye() const {
    return _eye;
}

void Decepticon::setForce(int force) {
    _force = force;
}

int Decepticon::getForce() const {
    return _force;
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << (Transformer&)decepticon << std::endl;

    os << "Class: Decepticon" << std::endl;
    os << "Eye: " << decepticon.getEye() << std::endl;
    os << "Force: " << decepticon.getForce();
    
    return os;
}

bool operator>(const Decepticon& decepticon1, const Decepticon& decepticon2) {
    return decepticon1.getForce() > decepticon2.getForce();
}

bool operator<(const Decepticon& decepticon1, const Decepticon& decepticon2) {
    return decepticon1.getForce() < decepticon2.getForce();
}

bool operator==(const Decepticon& decepticon1, const Decepticon& decepticon2) {
    return decepticon1.getForce() == decepticon2.getForce();
}