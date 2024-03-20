#include <iostream>
int separate(int num);
int randAnswer(int* answerArray);
int printAnswer(int * answerArray);
int printGuess();
int strikeBall(int * answerArray , int * guessAway);

int main() { 
    int answerArray [3] = {};
    randAnswer(answerArray);
    printAnswer(answerArray);
    
    bool trueFalse = true;
    while(trueFalse){
        int guess = printGuess();

        int guessArray [3] = {};
        for (int i=0; i<3; i++) {
            guessArray [i] = separate(guess);
            guess = guess / 10;
        }
        trueFalse = strikeBall(answerArray, guessArray);
    }
}