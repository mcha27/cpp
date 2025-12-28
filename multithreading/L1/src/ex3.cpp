#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

void task(int value, string s){
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Thread sees value: " << value << endl;
    cout << "Thread sees string: " << s << endl;
}

int main(){
    int local_data = 100;
    thread t(task, ref(local_data), "hello");
    t.join();
}