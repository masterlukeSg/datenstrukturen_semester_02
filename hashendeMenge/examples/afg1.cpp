// #include "../include/HashendeMengeRealisation.hpp"
#include "../src/HashendeMengeRealisation.ipp"

// clang++ -std=c++17 -I./include src/HashendeMengeRealisation.ipp examples/afg1.cpp -o p

using namespace ProjectAlpha;

int main()
{


    HashendeMengeRealisation<int> n;
    n.insert(5);
}