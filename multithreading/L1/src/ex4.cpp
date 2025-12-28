#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void task_join(const string& message){
    cout << message << endl;
}

void task_detach(const string& message){
    this_thread::sleep_for(std::chrono::seconds(2));
    cout << message << endl;
}

int main(){
    thread t1(task_join, "Thread 1 function executed.");
    t1.join();

    thread t2(task_detach, "Thread 2 function finished");
    t2.detach();

    cout << "Main thread is done and will not wait for the background task." << endl;

    this_thread::sleep_for(std::chrono::seconds(3));

    return 0;
}