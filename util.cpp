#include <iostream>
#include <ctime>

int randAnswer(int* answerArray) {
    srand(time(NULL));
    for (int i = 0; i<3; i++) {
        answerArray [i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (answerArray [j] == answerArray [i]) {
                i--;
            }
        }
    }
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

int printCount(int count) {
    std::cout << count << " chances left." <<std::endl;
    count--;
    return count;
}