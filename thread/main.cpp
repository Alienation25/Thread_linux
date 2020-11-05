#include <iostream>

#include <thread>



void run1(){ 
 std::cout<<"hello";
}


void run2 (){
 std::cout<<"world";
}

int main (){
    std::thread t1(run1);
    std::thread t2(run2);
   t1.join();
   t2.join();
   return 0;
}

