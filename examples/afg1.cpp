#include "../src/Priority.ipp"
#include "../include/maxheap.hpp"
#include <string>

// clang++ -std=c++17 -I./include src/Test.ipp examples/afg1.cpp
using namespace ProjectAlpha;


int main(){

    Priority<std::string, int> s;
    s.insert("sechs", 6);
    s.insert("acht", 8);
    
    s.insert("neun", 9);
    
    s.insert("vier", 4);
    s.print();
    std::cout << " --- " << std::endl;
    s.extract_top();
    s.print();
    

}