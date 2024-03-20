#include <iostream>
#include <ctime>

randAnswer(int* answerArray) {
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

int printAnswer(int * answerArray) {
        std::cout << "Answer is " << answerArray [2] << answerArray [1] << answerArray [0] <<std::endl;
        return 0;
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