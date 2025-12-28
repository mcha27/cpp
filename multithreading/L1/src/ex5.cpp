#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void sum_thr(vector<int> arr){
    int sum = 0;
    for (size_t i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    cout << "sum of array: " << sum << endl;
}

int main(){
    vector<int> arr = {10, 10, 10, 10, 10};
    thread t(sum_thr, arr);
    t.join();

    return 0;
}