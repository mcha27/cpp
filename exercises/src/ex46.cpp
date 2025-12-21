#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n for sum of 1 + 1/2 + 1/3 + ... + 1/n series: ";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++){
        sum += 1.0 / i;;
    }
    cout << sum << endl;
    return 0;
}