#include <iostream>
using namespace std;

int main(){
    int x = 100;
    for (int i = 1; i <= x; i++){
        if (i % 2 == 1){
            int t = x - i;
            int left = t / 2;
            int right = t / 2;
            for (int j = 0; j < left; j++){
                cout << " ";
            }
            for (int star = 0; star < i; star++){
                cout << "*";
            }
            for (int k = 0; k < right; k++){
                cout << " ";
            }
            cout << endl;
        }
    }
}