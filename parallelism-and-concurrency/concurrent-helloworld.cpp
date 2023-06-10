#include <iostream>
#include <thread>

using namespace std;

void hello(){
  cout<<"Hello Concurrent World\n";

}

int main(){
        thread t(hello);
         t.join();
         return 0;
}

/*
Usage:
$ g++ -pthread  concurrent-helloworld.cpp -o concurrent-helloworld

Using CMake:

add_compile_options(-pthread)

Or  

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread)

*/



