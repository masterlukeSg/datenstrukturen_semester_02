#pragma once 
#include <iostream> 
#include <Doubly_Linked_Listnode.hpp>


namespace ProjectAlpha {

    template <class T>

    class E_Liste_Template{

        public :

        virtual int get_size()=0;
        virtual std::shared_ptr<ListNode<T>> get_head()=0;
        virtual std::shared_ptr<ListNode<T>> get_next(std::shared_ptr<ListNode<T>>)=0;
        virtual void insert_front(T)=0;
        virtual void remove_front(T)=0;
        virtual void insert_after(std::shared_ptr<ListNode<T>>,T)=0;
        virtual void remove_after(std::shared_ptr<ListNode<T>>)=0;
    };
}