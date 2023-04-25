#include "Doubly_Linked_List.hpp"
#include "Doubly_Linked_Listnode.hpp"  
#include "iostream"  

namespace ProjectAlpha{
    //template <class T>
   /* creating a new node with given data and nullptr to next and prev node
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::DoublyLinkedListNode (T data){
        data_ = data;
    std::shared_ptr<DoublyLinkedListNode<T>> next = nullptr;
    std::weak_ptr<DoublyLinkedListNode<T>> prev;
    }*/

   /* template <class T>
    // initializing head and tail (as nullptr)
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }*/
    template <class T>
    // returns first node of the current list (head)
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::get_first() const{
        return head;
    }
template <class T>
    // returns last node of the current list (tail)
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::get_last() const{
        return tail;
    }
    }

