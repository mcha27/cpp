L1:
1. Create a thread that prints “Hello from thread”
2. Launch multiple threads that print their thread IDs
3. Pass parameters to a thread function
4. Join and detach threads
5. Create a thread that calculates the sum of an array
6. Demonstrate a race condition (no mutex)
7. Synchronize a shared variable using std::mutex
8. Use std::lock_guard vs std::unique_lock
9. Create a thread-safe counter
10. Compare single-thread vs multithreaded sum performance


L2: 
1. Use std::condition_variable for thread signaling
2. Producer–consumer using a queue and condition variable
3. Implement a bounded blocking queue
4. Use std::async and std::future to get results
5. Run multiple async tasks and wait for all results
6. Readers–Writers problem using std::shared_mutex
7. Thread-safe logging class
8. Use std::atomic for lock-free increment
9. Compare atomic vs mutex-based counters
10. Launch threads using a class member function
11. Use thread-local storage (thread_local)
12. Simulate a bank account with deposit/withdraw using locks


L3: 
1. Thread pool implementation (basic)
2. Multithreaded merge sort
3. Parallel matrix multiplication
4. Multithreaded file downloader (simulation)
5. Thread-safe cache using read/write locks
6. Work-stealing thread pool
7. Lock-free queue using std::atomic
8. Debug deadlocks using intentionally broken mutex logic
