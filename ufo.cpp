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

    // Endgame call
    end_game(answer, codeword);
    
}