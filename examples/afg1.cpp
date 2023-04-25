#include "../include/stack.hpp"
#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include <iostream>
#include "../src/stack.ipp"

//clang++ -std=c++17 -I./include src/stack.cpp examples/afg1.cpp
//ipp dateien von linked list und stack wurden eingefügt 

using namespace ProjectAlpha;

int main(){
    stack<int> s;
    s.add(5);
    s.add(7);
    s.add(16);
    s.stackDisplay();
    s.add(33);
    s.add(9);
    s.stackDisplay();
    s.pop();
    
    std::cout<<"Size of list:" << s.getsize() <<std::endl;
    std::cout<<"first element: " << s.peek() <<std::endl;
    
    
}
