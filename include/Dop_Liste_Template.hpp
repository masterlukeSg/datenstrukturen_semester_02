#pragma once 
#include <iostream> 
#include <Doubly_Linked_Listnode.hpp>


namespace ProjectAlpha {

    template <class T>

    class Dop_Liste_Template{

        public :

        virtual int get_size()=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_head()=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_Tail()=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_next(std::shared_ptr<DoublyLinkedListNode<T>>)=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_prev(std::shared_ptr<DoublyLinkedListNode<T>>)=0;
        virtual void insert_front(T)=0;
        virtual void remove_front()=0;
        virtual void insert_after(std::shared_ptr<DoublyLinkedListNode<T>>,T)=0;
        virtual void remove(std::shared_ptr<DoublyLinkedListNode<T>>)=0;
    };
}