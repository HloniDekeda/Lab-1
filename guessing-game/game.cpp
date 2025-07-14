#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    auto randomNumber  = rand() % 100 + 1;
    int guess;
    auto tries = 5;

    cout << "Enter your guess: " << endl;

    do{
        cin >> guess;
        if(guess == randomNumber){
            cout << "You win " << endl;
            break;
        }
        else if(guess < randomNumber){
            cout << "Guess higher " << endl;
        }
        else if(guess > randomNumber){
            cout << "Guess lower " << endl;
        }
        tries--;
        if(tries == 0){
            cout << "You lose " << endl;
            break;
        }

    } while(guess != randomNumber);

    return 0;


}