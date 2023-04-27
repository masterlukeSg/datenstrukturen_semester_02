#pragma once 
#include <iostream> 
#include "../include/listnode.hpp"



namespace ProjectAlpha {

    template <class T>

    class E_Liste_Template{

        public :

        
        //virtual std::shared_ptr<ListNode<T>> get_head()=0;
        virtual std::shared_ptr<ListNode<T>> next(const std::shared_ptr<ListNode<T>>&)=0;
        virtual std::shared_ptr<ListNode<T>> insert_front(T)=0;
        virtual std::shared_ptr<ListNode<T>> remove_front()=0;
        virtual std::shared_ptr<ListNode<T>> insert_after(const std::shared_ptr<ListNode<T>>&,T)=0;
        virtual std::shared_ptr<ListNode<T>> remove_after(const std::shared_ptr<ListNode<T>>&)=0;
    };
}