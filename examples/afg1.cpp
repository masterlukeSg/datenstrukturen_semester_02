#include "../src/Priority.ipp"
#include <string>

// clang++ -std=c++17 -I./include src/Test.ipp examples/afg1.cpp
using namespace ProjectAlpha;


int main(){

    Priority<std::string, int> s;
    s.insert("fünf", 6);
    s.insert("zwei", 8);
    
    s.insert("drei", 9);
    s.insert("vier", 4);
   s.print();
    

}