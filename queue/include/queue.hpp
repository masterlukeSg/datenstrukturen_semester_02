#pragma once 
#include <iostream>
#include "../queue/include/queueinterface.hpp"
#include "../queue/include/doublylinkedlist.hpp"
#include "../queue/include/dllistnode.hpp"

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