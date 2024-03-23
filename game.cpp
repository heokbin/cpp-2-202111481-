#include <iostream>
int print(int strikes, int Balls);

int separate(int num) {
    num = num % 10;
    return num;
}

int strikeBall(int * answerArray, int * guessArray) {
    int strikes = 0;
    int balls = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (answerArray[i] == guessArray[j]) {
                if (i==j) {
                    strikes++;
                    }  
                else {
                    balls++;
                }
            }
        }
    }
    
    bool trueFalse = true;
    trueFalse = print(strikes, balls);
    return trueFalse;
}