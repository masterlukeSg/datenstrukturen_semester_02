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
    
    template <class T>
    // inserting given integer at the front of the list
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::insert_front(T x) {
        std::shared_ptr<DoublyLinkedListNode<T>> new_node = std::make_shared<DoublyLinkedListNode<T>>(x); // creating node
        new_node->next = head; // changing next pointer to the current head
        // if there is a tail then the previous pointer of the current head is the new head
        if (tail){
            head->prev = new_node;
        }
        // if there is no tail then the new head is the tail
        else {
            tail = new_node;
        }
        head = new_node; // new head is new node

        return head;
    }

}