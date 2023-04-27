#include "../include/dllistnode.hpp"
#include "../include/doublylinkedlist.hpp"
#include <iostream>
#include <memory>

namespace ProjectAlpha
{
    template<class T>
    DListNode<T>::DListNode(T data)
    {
        data_ = data;
        next= nullptr;
        prev.lock()= nullptr;

    }

   

    template<class T>
    std::shared_ptr<DListNode<T>> DLinkedList<T>::get_first() const
    {
        return head;
    }

    template <class T>
    std::shared_ptr<DListNode<T>> DLinkedList<T>::get_last() const
    {
        return tail;
    }
   
    template <class T>
    std::shared_ptr<DListNode<T>> DLinkedList<T>::insert_last(T x)
    {
        std::shared_ptr<DListNode<T>> neuerPointer = std::make_shared<DListNode<T>>(x);

        if (tail == nullptr)
        {
            head = neuerPointer;
            tail = neuerPointer;
        }
        else
        {
            neuerPointer->next = nullptr;
            neuerPointer->prev = tail;
            tail->next = neuerPointer;
            tail = neuerPointer;
        }

        return neuerPointer;
    }

    template <class T>
    
    std::shared_ptr<DListNode<T>> DLinkedList<T>::remove_front()
{
    if (head == nullptr)
        return nullptr;
    
    std::shared_ptr<DListNode<T>> toRemove = head;
    head = head->next;
    if (head != nullptr)
        head->prev.lock() = nullptr;
        
    toRemove->next = nullptr;
    return toRemove;
}


   

    template <class T> 
    void DLinkedList<T>::print() const
    {
        std::shared_ptr<DListNode<T>> current = head;
        while (current)
        {
            std::cout << current->data_ << " | ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    template <class T>
    int DLinkedList<T>::size() 
    {
        int count = 0;
        std::shared_ptr<DListNode<T>> current = head;
        while (current!= nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }
}