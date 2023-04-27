#pragma once 
#include <iostream> 
#include "../include/Doubly_Linked_Listnode.hpp"


namespace ProjectAlpha {

    template <class T>

    class Dop_Liste_Template{

        public :

        
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_first()=0 ;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> get_last()=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> next(const std::shared_ptr<DoublyLinkedListNode<T>>&)=0 ;
        virtual std::weak_ptr<DoublyLinkedListNode<T>> prev(const std::shared_ptr<DoublyLinkedListNode<T>>&)=0 ;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> insert_front(T)=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> insert_after(const std::shared_ptr<DoublyLinkedListNode<T>>&,T)=0;
        virtual std::shared_ptr<DoublyLinkedListNode<T>> remove(const std::shared_ptr<DoublyLinkedListNode<T>>&)=0;
    };
}