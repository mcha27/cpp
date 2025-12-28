#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int global_resource = 10000;

mutex m;

void task() {
    while (true) {
        lock_guard<mutex> lock(m);
        if (global_resource == 0) break;
        global_resource--;
    }
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Final global_resource: " << global_resource << endl;
}
