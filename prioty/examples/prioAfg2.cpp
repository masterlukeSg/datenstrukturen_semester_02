#include "../include/priorityqueue.hpp"
#include "../src/priorityqueue.ipp"
#include <string>
#include <iostream>
// clang++ -std=c++17 -I./include priorityqueue.cpp prioAfg2.cpp -o p

using namespace ProjectAlpha;


    int main()
    {
        Priorityqueue<std::string,int> q;
        q.insert("hallo", 1);
    }
