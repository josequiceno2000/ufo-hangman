#include <iostream>
#include "ufo_functions.hpp"

int main() {
    greet();

    // Set up variables
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    // Game loop
    while (answer != codeword && misses < 7) {
        misses++;
    }

    // Win and Lose conditions
    if (answer == codeword) {
        std::cout << "SUCCESS: Human has been saved and you earn a medal of honor!\n";
    }
    else {
        std::cout << "FAILURE: The human will be experimented on. And it's your fault.\n";
    }
}