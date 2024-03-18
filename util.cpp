#include <iostream>
int printAnswer() {
    int answer;
    std::cout << "Enter a ansewr: ";
    std::cin >> answer;
    return answer;
}

int printGuess() {
    int guess;
    std::cout << "Enter a guess: ";
    std::cin >> guess;
    return guess;
}

int print(int strikes, int balls) {
    bool trueFalse = true;
    if (strikes == 3) {
        std::cout << "You win!";
        trueFalse = false;
    }
    else {
        std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;
    }
    return trueFalse;
}