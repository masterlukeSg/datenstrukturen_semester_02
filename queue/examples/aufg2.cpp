#include <iostream>
#include "../src/queue.ipp"
#include "../include/dllistnode.hpp"
#include "../include/doublylinkedlist.hpp"
#include "../include/queue.hpp"


using namespace ProjectAlpha;

int main (){

    queue<int> q;
    q.add(15);
    q.queueDisplay();
}