#include <iostream>
#include <thread>
using namespace std;

void thread_task(string x) {
    thread::id current_id = this_thread::get_id();
    cout << "Thread ID (from within the thread): " << current_id << endl;
    cout << "Thread: " << x << endl;
}

int main() {
    thread::id main_thread_id = this_thread::get_id();
    cout << "Main thread ID: " << main_thread_id << endl;

    thread t1(thread_task, "t1");
    thread t2(thread_task, "t2");
    thread t3(thread_task, "t3");
    thread t4(thread_task, "t4");

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    
    return 0;
}