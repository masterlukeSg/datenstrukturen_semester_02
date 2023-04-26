#include "../queue/include/dllistnode.hpp"
#include "../queue/include/doublylinkedlist.hpp"
#include <iostream>

namespace Datenstrukturen
{
    template<class T>
    DoublyLinkedListNode<T>::DoublyLinkedListNode(T data)
    {
        data_ = data;
    }
    template<class T>
    DoublyLinkedList<T>::DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    template<class T>
    DListNodeptr DoublyLinkedList<T>::get_first() const
    {
        return head;
    }

    template <class T>
    DListNodeptr DoublyLinkedList<T>::get_last() const
    {
        return tail;
    }
   
    template <class T>
    DListNodeptr DoublyLinkedList<T> ::insert_last(T x)
    {
        DListNodeptr neuerPointer = std::make_shared<DoublyLinkedListNode>(x);

        
            neuerPointer->next = nullptr;
            pred->next = neuerPointer;

            neuerPointer->prev = pred;

            tail = neuerPointer;

            return neuerPointer;
       
    }
    template <class T >
    DListNodeptr DoublyLinkedList<T>::remove_front()
    {
        if (!head)
            return nullptr;
        
        std::shared_ptr<ListNode<T>> toRemove = head;
        
        head = head->next;
        head -> prev.lock() = nullptr;
        toRemove->next = nullptr;
        return toRemove;
    }

    template <class T>
    DListNodeptr DoublyLinkedList<T>::next(const DListNodeptr &n) const
    {
        return n->next;
    }
    template < class T >
    DListNodeptr DoublyLinkedList<T> ::prev(const DListNodeptr &n) const
    {
      
        return n -> prev.lock();
    }
    template < class T > 
    void DoublyLinkedList<T>::print() const
    {

        DListNodeptr current = head;
        while (current)
        {

            std::cout << current->data_ << " -> ";
            current = current->next;
        }
        std::cout << "null" << std::endl;
    }

    template < class T> 
    int DoublyLinkedList<T>::size(){
        
        int count =0;
        DListNodeptr curr= head;

        while (curr !=){

            curr++;
            curr= curr->next;
        }
        return count;

    }

    

}