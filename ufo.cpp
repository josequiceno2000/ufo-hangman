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
    char letter;

    // Game loop
    while (answer != codeword && misses < 7) {
        display_misses(misses);

        display_status(incorrect, answer);

        std::cout << "Enter your letter guess: ";
        std::cin >> letter;

        for (int i = 0; i < codeword.size(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        }

        misses++;
    }

    // Endgame call
    end_game(answer, codeword);
    
}