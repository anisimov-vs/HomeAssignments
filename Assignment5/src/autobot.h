// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

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

        std::string transform() const override;
        std::string openFire() const override;
        std::string ulta() const override;

        bool protect();

        void setEye(Eye eye);
        Eye getEye() const;

        void setShield(int shield);
        int getShield() const;

        friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);

        friend bool operator>(const Autobot& autobot1, const Autobot& autobot2);
        friend bool operator<(const Autobot& autobot1, const Autobot& autobot2);
        friend bool operator==(const Autobot& autobot1, const Autobot& autobot2);

    private:
        Eye _eye;
        int _shield;
};

#endif