### Parallelism and Concurrency
1. Automatically parallezing code that uses standard algorithms.
2. Putting a program to sleep for specific amounts of time.
3. Starting and stopping threads.
4. Performing  exception-safe shared locking with `std::unique_lock` and `std::shared_lock`.
5. Avoiding deadlocks with `std::scoped_lock`.
6. Synchronizing concurrent `std::cout` use.
7. Safely postponing initialization with `std::call_one`.
8. Pushing the execution of tasks into the background using `std::async`.
9. Implementing the producer/consumer idiom with `std::condition_variable`
10. Implementing multiple the producers/consumers idiom with `std::condition_variable`.
11. Parallelizing the ASCII Mandelbrot renderer using `std::async`.
12. Implementing a tiny automatic parallezation library with `std::future`. 
