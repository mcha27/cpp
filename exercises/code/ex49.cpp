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

int LCM(int a, int b){
    return a * b;
}   

int main(){
    cout << "Enter a and b for LCM. (ex LCM(a, b)): " << endl;
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << LCM(a,b)/GCD(a, b) << endl;
}