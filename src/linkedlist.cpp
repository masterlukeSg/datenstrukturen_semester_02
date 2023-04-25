#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "iostream"

namespace ProjectAlpha{

    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::insert_front(T x)
    {
        std::shared_ptr<ListNode<T>> newPointer = std::make_shared<ListNode<T>>(x);
        newPointer->next = head;
        head = newPointer;
        return newPointer;
    }

   
}