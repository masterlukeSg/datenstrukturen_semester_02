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
    s.push(5);
    s.push(7);
    s.push(16);
    s.stackDisplay();
    s.push(33);
    s.push(9);
    s.stackDisplay();
    s.remove();
    
    std::cout<<"Size of list:" << s.getsize() <<std::endl;
    std::cout<<"first element: " << s.peek() <<std::endl;
    
    
}
