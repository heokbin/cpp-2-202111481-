#include <iostream>
int separate(int num);
int printAnswer();
int printGuess();
int strikeBall(int * answerArray , int * guessAway);

int main() {
    int answer = printAnswer();

    int answerArray [3] = {};
    for (int i=0; i<3; i++) {
        answerArray [i] = separate(answer);
        answer = answer / 10;
    }
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