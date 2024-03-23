#include <iostream>
int separate(int num);
int randAnswer(int* answerArray);
int printGuess();
int strikeBall(int * answerArray , int * guessAway);
int printCount(int count);

int main() { 
    int answerArray [3] = {};
    randAnswer(answerArray);
    
    bool trueFalse = true;
    int count = 5;
    while(trueFalse){
        if (count == 0) {
            std::cout << "You lose!";
            break;
        }
        count = printCount(count);

        int guess = printGuess();

        int guessArray [3] = {};
        for (int i=0; i<3; i++) {
            guessArray [i] = separate(guess);
            guess = guess / 10;
        }
        trueFalse = strikeBall(answerArray, guessArray);
    }
}