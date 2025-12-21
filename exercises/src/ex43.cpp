#include <iostream>
#include <random>
#include <limits>
using namespace std;

int main(){
    random_device rd;
    mt19937 engine(rd()); 
    int min = 1;
    int max = 100;
    uniform_int_distribution<int> dist(min, max);
    int random_num = dist(engine);

    cout << "Guess the number from 1 - 100" << endl;
    bool guess = true;
    int n;
    while (guess){
        cin >> n;
        if (n < random_num){
            cout << "guess higher" << endl;
        }
        else if (n > random_num){
            cout << "guess lower" << endl;
        }
        else if (n == random_num){
            cout << "guessed correctly: " << random_num << endl;
            guess = false;
        }
    }
}