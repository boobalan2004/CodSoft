#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int secretNo = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Can you guess the number between 1 and 100?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        attempts++;

        if (userGuess < secretNo) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > secretNo) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != secretNo);

    return 0;
}
