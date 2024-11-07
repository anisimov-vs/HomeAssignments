// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 4

#ifndef TRANSFORMER_h
#define TRANSFORMER_h

#include "direction.h"
#include "gun.h"
#include <string>
#include <iostream>

class Transformer {
    public:
        Transformer(enum Direction direction = Direction::North, Gun* gun = new Gun(), std::string name = "Transformer 404", int level = 10, int strength = 10, int fuel = 100, int health = 100) : _direction(direction), _gun(gun), _name(name), _level(level), _strength(strength),_fuel(fuel), _health(health) { };
        ~Transformer() { delete _gun; }

        bool move();
        bool turn(enum Direction direction);
        bool jump();

        void setDirection(Direction dir);
        Direction getDirection() const;
        
        void setGun(Gun *gun);
        Gun* getGun() const;

        void setName(std::string name);
        std::string getName() const;

        void setLevel(int level);
        int getLevel() const;

        void setStrength(int strength);
        int getStrength() const;

        void setFuel(int fuel);
        int getFuel() const;

        void setHealth(int health);
        int getHealth() const;

        void setRange(int range);
        int getRange() const;

        void setAmmo(int ammo);
        int getAmmo() const;

        void setDamage(int damage);
        int getDamage() const;

        bool fire();

        friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

        friend bool operator>(const Transformer& transformer1, const Transformer& transformer2);
        friend bool operator<(const Transformer& transformer1, const Transformer& transformer2);
        friend bool operator==(const Transformer& transformer1, const Transformer& transformer2);


    
    private:
        enum Direction _direction;
        Gun* _gun;

        std::string _name;
        int _level;
        int _strength;
        int _fuel;
        int _health;
};

#endif