#pragma once

#include <memory>

#include "../include/dllistnode.hpp"

namespace ProjectAlpha {
template<class T>
class DLinkedList{
public:
   DLinkedList(): head(nullptr), tail(nullptr) {}
  
  // Get the first Node of the current List
  std::shared_ptr<DListNode<T>> get_first() const;
  
  // Get the last Node of the current List
  std::shared_ptr<DListNode<T>> get_last() const;
  
  // Insert and delete Nodes
  
  std::shared_ptr<DListNode<T>> insert_last(T x);
  std::shared_ptr<DListNode<T>> remove_front();
  int size();

  void print() const;



  std::shared_ptr<DListNode<T>> head;
  std::shared_ptr<DListNode<T>> tail;
};

}