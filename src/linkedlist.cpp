#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "iostream"
#include <memory>

namespace ProjectAlpha{
    template<class T>
   // creating a new node with given data and a nullptr to next node
    ListNode<T>::ListNode (T data) {
        data_ = data;
        next = nullptr;
    }
    template <class T>
    // initializing head (as nullptr)
    List<T>::List(){
    head = nullptr;
    }

    template <class T>
    // inserting given integer at the front of the list
    std::shared_ptr<ListNode<T>> List<T>::insert_front (T x) {
        std::shared_ptr<ListNode<T>> new_node = std::make_shared<ListNode<T>>(x); //creating node
        new_node->next = head; // changing next pointer to the current head
        head = new_node; // new head is new node

        return head;
    }

    template <class T>
    // inserting given integer after the given pointer
    std::shared_ptr<ListNode<T>> List<T>::insert_after (const std::shared_ptr<ListNode<T>>& current, T x){
        if (current == nullptr){ // given node can not be a nullptr
            std::cout << "the node does not exist" << std::endl;
            return nullptr;
        }
        if (head == nullptr){ // if the list is empty then a new head is created
            insert_front(x);
            return head;
        }
        std::shared_ptr<ListNode<T>> new_node = std::make_shared<ListNode<T>>(x); // creating node
        new_node -> next = current -> next; // changing next pointer to the next pointer of current
        current -> next = new_node; // changing next pointer of current to the new node
        return new_node;
    }
     
     template <class T>
    // removing a pointer at the beginning of the list
    std::shared_ptr<ListNode<T>> List<T>::remove_front (){
        if (!head){ // if we have an empty list we do not need to remove anything
            return nullptr;
        }
        std::shared_ptr<ListNode<T>> new_head = head->next; // creating a new head pointing to the next object of current head
        head = new_head; // new head is from now on the head
        return head;
    }
      
    template <class T>
    // removing a pointer after the given pointer
    std::shared_ptr<ListNode<T>> List<T>::remove_after (const std::shared_ptr<ListNode<T>>& current){
        if (current -> next == nullptr) { // if the list ends after the given pointer then nothing can be removed
            return nullptr;
        }
        std::shared_ptr<ListNode<T>> tmp_node = current -> next; // creating temporary pointer
        current -> next = tmp_node -> next; // setting given pointer to the next of tmp node
        return current -> next;
    }

    template <class T>
    // returns the next pointer of the given pointer
    std::shared_ptr<ListNode<T>> List<T>::next (const std::shared_ptr<ListNode<T>>& current){
        return current -> next;
    }

    template <class T>
    // prints the whole list
    void List<T>::print() const{
        std::shared_ptr<ListNode<T>> iterator_node = head; // creating an iterator that starts at the head
        // prints out data of the node until iterator is a nullptr
        while (iterator_node) {
            std::cout << iterator_node->data_ << " -> ";
            iterator_node = iterator_node -> next;
        }
        std::cout << "null" << std::endl;
    }
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   