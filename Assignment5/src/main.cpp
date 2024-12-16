// Anisimov Vasiliy st129629@student.spbu.ru
// Assignment 5

#include <iostream>
#include <vector>

#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"

int main() {
    std::vector<Transformer*> transformers;

    for (int i = 0; i < 3; ++i) {
        transformers.push_back(new Transformer());
        transformers.push_back(new Autobot());
        transformers.push_back(new Decepticon());
    }

    for (auto transformer : transformers) {
        std::cout << transformer->transform() << std::endl;
        std::cout << transformer->openFire() << std::endl;
        std::cout << transformer->ulta() << std::endl;
        std::cout << std::endl;
    }
}