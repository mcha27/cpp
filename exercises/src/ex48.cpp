#include <iostream>
using namespace std;

int GCD(int a, int b){
    int r = a % b;
    if (r == 0){
        return b;
    }
    else{
        return (GCD(b, r));
    }
}

int main(){
    cout << "Enter a and b for GCD. (ex GCD(a, b)): " << endl;
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << GCD(a, b) << endl;
}