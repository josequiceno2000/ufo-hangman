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
        std::cout << "Incorrect Guesses: ";

        for (int i = 0; i < incorrect.size(); i++) {
            std::cout << incorrect[i] << " ";
        }

        misses++;
    }

    // Endgame call
    end_game(answer, codeword);
    
}