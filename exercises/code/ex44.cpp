#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    bool exited = true;
    while (exited){
        cout << "1. Action 1 " << endl;
        cout << "2. Action 2 " << endl;
        cout << "3. Action 3 " << endl;
        cout << "4. Action 4 " << endl;
        cout << "5. Action 5 " << endl;
        cout << "0. Exit " << endl;
        cin >> n;
        if (n == 1){
            cout << "Performed action 1.";
            cout << endl;
        }
        else if (n == 2){
            cout << "Performed action 2.";
            cout << endl;
        }
        else if (n == 3){
            cout << "Performed action 3.";
            cout << endl;
        }
        else if (n == 4){
            cout << "Performed action 4.";
            cout << endl;
        }
        else if (n == 5){
            cout << "Performed action 5.";
            cout << endl;
        }
        else if (n == 0){
            cout << "exited.";
            exited = false;
            cout << endl;
        }
    }
}