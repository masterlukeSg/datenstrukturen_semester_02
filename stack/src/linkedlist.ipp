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



    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::remove_front()
    {
        if (!head)
            return nullptr;
        
        std::shared_ptr<ListNode<T>> toRemove = head;
        head = head->next;
        toRemove->next = nullptr;
        return toRemove;
            

        

    }
    
    template<class T>
    std::shared_ptr<ListNode<T>> List<T>::gethead()
    {
        return head;
    }
    
    template<class T>
    int List<T>::size(){
        int count= 0;
        std::shared_ptr<ListNode<T>> curr= head;
        while (curr != nullptr){
            count ++;
            curr= curr->next;
        }
        return count; //git commit linkedlist.ipp -m "count funktion hinzugefügt"


    }

    
   
    template <class T>
    void List<T>::print() const
    {
        std::shared_ptr<ListNode<T>> current = head;
        while (current)
        {
            
            std::cout << current->data_ << " |  ";
            current = current->next;
        }
        std::cout << std::endl;
    }
}