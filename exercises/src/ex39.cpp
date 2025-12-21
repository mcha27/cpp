#include <iostream>
using namespace std;

int main(){
    int x = 5;
    for (int i = 1; i <= x; i++){
        for (int j = 0; j <= x - i; j++){
            cout << " ";
        }
        for (int star = 0; star < i; star++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}