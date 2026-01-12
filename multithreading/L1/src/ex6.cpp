#include <iostream>
#include <thread>
using namespace std;

int global_resource = 0;

void task() {
    for(int i = 0; i < 1000000; i++){
        global_resource++;
    }
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Final global_resource: " << global_resource << endl;
}
