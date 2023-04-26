#pragma once
#include <memory>
#include "Doubly_Linked_Listnode.hpp"
#include "Dop_Liste_Template.hpp"


namespace ProjectAlpha{

template <class T>

class DoublyLinkedList{

 public:
 DoublyLinkedList();
  
  // Get the first Node of the current List
  DListNodeptr get_first() const;
  
  // Get the last Node of the current List
  DListNodeptr get_last() const;
  
  // Insert and delete Nodes
  DListNodeptr insert_front(T x);
  DListNodeptr insert_after(const DListNodeptr& prev, T x);
  DListNodeptr remove(const DListNodeptr& n);

  // Get the next Node of the current List
  DListNodeptr next(const DListNodeptr& n) const;
  
  // Get the previous Node of the current List
  WeakDListNodeptr prev(const DListNodeptr& n) const;

  // Print the current List
  void print() const;

private:
  DListNodeptr head;
  DListNodeptr tail;
};

}



















  /*DoublyLinkedList(): head(nullptr) {}, tail(nullptr) {};
  
  // Get the first Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> get_first() const;
  
  // Get the last Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> get_last() const;
  
  // Insert and delete Nodes
  std::shared_ptr<DoublyLinkedListNode<T>> insert_front(T x);
  std::shared_ptr<DoublyLinkedListNode<T>> insert_after(const std::shared_ptr<DoublyLinkedListNode<T>>, T x);
  std::shared_ptr<DoublyLinkedListNode<T>> remove(const std::shared_ptr<DoublyLinkedListNode<T>> n);

  // Get the next Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> next(const std::shared_ptr<DoublyLinkedListNode<T>> n) const;
  
  // Get the previous Node of the current List
  std::weak_ptr<DoublyLinkedListNode<T>> prev(const std::shared_ptr<DoublyLinkedListNode<T>> n) const;

  // Print the current List
  void print() const;

private:
  std::shared_ptr<DoublyLinkedListNode<T>> head;
  std::shared_ptr<DoublyLinkedListNode<T>> tail;
};

}*/
