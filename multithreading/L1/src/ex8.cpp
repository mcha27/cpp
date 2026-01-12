#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int global_resource = 0;

mutex m;

void task() {
    lock_guard<mutex> lock(m);
    global_resource++;
}

void task2(){
    unique_lock<mutex> lock(m);
    global_resource++;
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    thread t3(task);
    thread t4(task);
    
    t3.join();
    t4.join();
    cout << "Final global_resource: " << global_resource << endl;
}
