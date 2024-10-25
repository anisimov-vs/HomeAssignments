// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 3

#ifndef AUTOBOT_h
#define AUTOBOT_h

#include "transformer.h"
#include "eye.h"
#include "gun.h"
#include "direction.h"

class Autobot: public Transformer {
    public:
        Autobot(enum Direction direction = Direction::North, Gun* gun = new Gun(), std::string name = "Autobot 404", int level = 10, int strength = 10, int fuel = 100, int health = 100, Eye eye = Eye::Blue, int shield = 10) : Transformer(direction, gun, name, level, strength, fuel, health), _eye(eye), _shield(shield)  { };
        ~Autobot() { }

        bool transform();
        bool protect();

        void setEye(Eye eye);
        Eye getEye();

        void setShield(int shield);
        int getShield();

    private:
        Eye _eye;
        int _shield;
};

#endif