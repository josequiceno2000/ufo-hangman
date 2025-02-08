#include <iostream>
#include "ufo_functions.hpp"

int main() {
    greet();

    // Set up variables
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;

    // Game loop
    while (answer != codeword && misses < 7) {
        display_misses(misses);

        display_status(incorrect, answer);

        misses++;
    }

    // Endgame call
    end_game(answer, codeword);
    
}