//#include "include/priorityqueue.hpp"
#include <string>
#include "src/priorityqueue.ipp"
#include <iostream>
// clang++ -std=c++17 -I./include src/priorityqueue.ipp prioMain.cpp -o p

using namespace ProjectAlpha;


    int main()
    {
        Priorityqueue<std::string,int> q;
        q.insert("5",4);
    }
