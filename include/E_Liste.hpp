#pragma once 
#include <iostream>
#include "../include/E_Liste_Template.hpp"


namespace ProjectAlpha {

    template <class T>

    class E_Liste : public E_Liste_Template<T> {

        public:

         E_Liste(); 
         int get_size();
         std::shared_ptr<ListNode<T>> get_head();
         std::shared_ptr<ListNode<T>> get_next(std::shared_ptr<ListNode<T>>);
         void insert_front(T);
         void remove_front(T);
         void insert_after(std::shared_ptr<ListNode<T>>,T);
         void remove_after(std::shared_ptr<ListNode<T>>);


    };
}

