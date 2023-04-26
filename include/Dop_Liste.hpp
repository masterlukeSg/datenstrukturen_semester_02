#pragma once 
#include <iostream>
#include "Dop_Liste_Template.hpp"


namespace ProjectAlpha {

    template <class T>

    class Dop_Liste : public Dop_Liste_Template<T> {

        public:

         int get_size();
         std::shared_ptr<DoublyLinkedListNode<T>> get_head();
         std::shared_ptr<DoublyLinkedListNode<T>> get_Tail();
         std::shared_ptr<DoublyLinkedListNode<T>> get_next(std::shared_ptr<DoublyLinkedListNode<T>>);
         std::shared_ptr<DoublyLinkedListNode<T>> get_prev(std::shared_ptr<DoublyLinkedListNode<T>>);
         void insert_front(T);
         void remove_front();
         void insert_after(std::shared_ptr<DoublyLinkedListNode<T>>,T);
         void remove(std::shared_ptr<DoublyLinkedListNode<T>>);

    };
}
