#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n for sum of 1 + 3 + 5 + ... + n series: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 1){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}