#pragma once
#include <memory>
#include "../include/Doubly_Linked_List.hpp"

#include "../include/Dop_Liste_Template.hpp"


namespace ProjectAlpha{

template <class T>

class DoublyLinkedList: public Dop_Liste_Template<T> {

 public:
 DoublyLinkedList();
  
  // Get the first Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> get_first() override;
  
  // Get the last Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> get_last()  override;
  
  // Insert and delete Nodes
  std::shared_ptr<DoublyLinkedListNode<T>> insert_front(T x) override;
  std::shared_ptr<DoublyLinkedListNode<T>> insert_after(const std::shared_ptr<DoublyLinkedListNode<T>>& prev, T x) override;
  std::shared_ptr<DoublyLinkedListNode<T>> remove(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;

  // Get the next Node of the current List
  std::shared_ptr<DoublyLinkedListNode<T>> next(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;
  
  // Get the previous Node of the current List
  std::weak_ptr<DoublyLinkedListNode<T>> prev(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;

  // Print the current List
  void print() const;

private:
  std::shared_ptr<DoublyLinkedListNode<T>> head;
  std::shared_ptr<DoublyLinkedListNode<T>> tail;
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
