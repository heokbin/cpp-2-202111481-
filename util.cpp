#include <iostream>
#include <ctime>

int randAnswer() {
    int answer = 0;
    srand(time(NULL));
    answer = rand() % 1000;
    return answer;
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