#pragma once 
#include <iostream>
#include "../include/queueinterface.hpp"
#include "../include/doublylinkedlist.hpp"
#include "../include/dllistnode.hpp"
#include "../src/doublylinkedlist.ipp"

namespace ProjectAlpha{

    template< class T>
    class queue: public queueinterface <T>{

        public:

        queue();
        void add() override;
        T pop() override;
        int getSize() override;
        T peekTop();
        T peekFirst();
        bool isEmpty();
        void queueDisplay();

        private:

        DoublyLinkedListNode<T> list;


    }
}