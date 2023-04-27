#include <iostream> 
#include "../include/doublylinkedlist.hpp"
#include "../include/dllistnode.hpp"
#include "../src/doublylinkedlist.ipp"

using namespace ProjectAlpha;

int main (){


    DLinkedList<int> list;
    list.insert_last(143);
    list.insert_last(13);
    list.insert_last(9);
    list.print();
    list.remove_front();
    list.print();
}