#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Seed the random number generator
    int number = rand() % 100 + 1, guess;

    std::cout << "Guess the number between 1 and 100: ";
    do {
        std::cin >> guess;
        if (guess > number) std::cout << "Too high! Try again: ";
        else if (guess < number) std::cout << "Too low! Try again: ";
    } while (guess != number);

    std::cout << "Correct! You guessed the number.\n";
    return 0;
}
