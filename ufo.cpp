#include <iostream>
#include "ufo_functions.hpp"

int main() {
    greet();

    // Game setup
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    while (answer != codeword && misses < 7) {
        misses++;
    }
}