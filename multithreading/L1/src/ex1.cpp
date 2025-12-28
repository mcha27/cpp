#include <iostream>
#include <thread>
using namespace std;

void thread_task() {
    cout << "Thread says Hello!" << endl;
}

int main() {
    thread t1(thread_task);
    t1.join();
    
    return 0;
}