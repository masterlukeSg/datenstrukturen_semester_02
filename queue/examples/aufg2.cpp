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
    q.add(9);
    q.add(13);
    q.add(19);
    q.queueDisplay();
    q.pop();
    q.queueDisplay();

    std::cout<<"Size of list:" << q.getSize() <<std::endl;

}