#include "../include/Doubly_Linked_List.hpp"
#include "../include/Doubly_Linked_Listnode.hpp"  
#include "iostream"
#include <memory>  

namespace ProjectAlpha{
    
  template <class T>
  DoublyLinkedListNode<T>::DoublyLinkedListNode(T data){
        data_ = data;
        std::shared_ptr<DoublyLinkedListNode<T>> next = nullptr;
        std::weak_ptr<DoublyLinkedListNode<T>> prev;
    }

  template <class T>
    /**
     * @brief Construct a new Doubly Linked List< T>:: Doubly Linked List object
     * initializing head and tail (as nullptr)
     */
    DoublyLinkedList<T>::DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
 
  template <class T>
    /**
     * @brief std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::get_first()
      
     * @return std::shared_ptr<DoublyLinkedListNode<T>> - returns first node of the current list (head)

     */
    std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::get_first() {
        if (head ==nullptr){
            throw std::logic_error("Liste ist leer");
        }
        return head;
    }
    
   template <class T>
    // returns last node of the current list (tail)
    /**
     * @brief get_last
     * 
     * @return std::shared_ptr<DoublyLinkedListNode<T>> 
     */
    std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::get_last(){
     if (tail== nullptr){
        throw std::logic_error("Liste ist leer");
     }

     return tail;
    }
    
     template <class T>
    // inserting given integer at the front of the list
        std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::insert_front(T x){
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
    
    template <class T>
    // inserting given integer after the given pointer
    std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::insert_after(const std::shared_ptr<DoublyLinkedListNode<T>>& prev, T x){
        if (prev == nullptr) { // given node can not be a nullptr
            std::cout << "the node does not exist" << std::endl;
            return nullptr;
        }
        if (head == nullptr){ //if the list is empty then a new head is created
            insert_front(x);
            return head;
        }
        std::shared_ptr<DoublyLinkedListNode<T>> new_node = std::make_shared<DoublyLinkedListNode<T>>(x);
        new_node->prev = prev; // changing previous node of the new node to prev
        new_node->next = prev->next; // changing next node to the next node of prev
        prev->next = new_node; // changing next node of prev to the new node
        if (new_node->next != nullptr){
            new_node->next->prev = new_node; // changing previous node of next node to the new node
        }
        return new_node;
    }

    template <class T>
    // removing given pointer
    std::shared_ptr<DoublyLinkedListNode<T>>DoublyLinkedList<T>::remove(const std::shared_ptr<DoublyLinkedListNode<T>>& n){
        if (n->next == nullptr){ // if the list ends after the given pointer nothing can be removed
            return nullptr;
        }
        // if given pointer is the head then the next node is the new head pointer
        if (n == head){
           head = head->next;
           return head;
        }
        n->next->prev = n->prev; // changing prev pointer of next pointer to previous pointer of given pointer
        (n->prev.lock())->next = n->next; // changing next pointer of previous given pointer to next pointer of given pointer
        return n->next;
    }

    template <class T>
    // returns the next pointer of the given pointer
    std::shared_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::next(const std::shared_ptr<DoublyLinkedListNode<T>>& n) {
        if (n->next ==nullptr){
            throw std::out_of_range("Das Element hat keinen Nachfolger")
        }
        return n->next;
    } 

    template <class T>
    // returns the previous pointer of the given pointer
    std::weak_ptr<DoublyLinkedListNode<T>> DoublyLinkedList<T>::prev(const std::shared_ptr<DoublyLinkedListNode<T>>& n) {
        return n->prev;
    }

    template <class T>
    // prints the current list
    void DoublyLinkedList<T>::print() const{
        std::shared_ptr<DoublyLinkedListNode<T>> iterator_node = head; //creating an iterator that starts at the head
        // prints out data of the node until iterator is a nullptr
        while(iterator_node){
            std::cout << iterator_node->data_ << " -> ";
            iterator_node = iterator_node -> next;
        }
        std::cout << "null" << std::endl;
    }
}

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   