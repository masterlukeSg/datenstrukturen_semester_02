#pragma once 
#include <iostream>
#include "../include/queueinterface.hpp"
#include "../src/doublylinkedlist.ipp"
#include "../include/dllistnode.hpp"


namespace ProjectAlpha{

    template< class T>
    class queue: public queueinterface <T>{

        public:

        explicit queue();
        void add( T data) override;
        T pop() override;
        int getSize() override;
        T peekTop();
        T peekFirst();
        bool isEmpty();
        void queueDisplay() const;

        private:

        DLinkedList<T> list;


    };
}