#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int global_resource = 0;

mutex m;

void task() {
    m.lock();
    for(int i = 0; i < 1000000; i++){
        global_resource++;
    }
    m.unlock();
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Final global_resource: " << global_resource << endl;
}
