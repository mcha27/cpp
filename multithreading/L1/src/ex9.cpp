#include <atomic>
#include <iostream>
#include <thread>
#include <vector>

std::atomic<int> atomic_counter(0);

void increment_atomic() {
    for (int i = 0; i < 1000; ++i) {
        atomic_counter++; // This is thread-safe
    }
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(increment_atomic);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "Atomic Counter Value: " << atomic_counter.load() << std::endl; // Output: 10000
    return 0;
}
