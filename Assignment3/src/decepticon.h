// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 3

#ifndef DECEPTICON_h
#define DECEPTICON_h

#include "transformer.h"
#include "eye.h"
#include "gun.h"
#include "direction.h"

class Decepticon: public Transformer {
    public:
        Decepticon(enum Direction direction = Direction::North, Gun* gun = new Gun(), std::string name = "Decepticon 404", int level = 10, int strength = 10, int fuel = 100, int health = 100, Eye eye = Eye::Red, int force = 10) : Transformer(direction, gun, name, level, strength, fuel, health), _eye(eye), _force(force)  { };
        ~Decepticon() { }

        bool transform();
        bool attack();

        void setEye(Eye eye);
        Eye getEye();

        void setForce(int force);
        int getForce();

    private:
        Eye _eye;
        int _force;
};

#endif