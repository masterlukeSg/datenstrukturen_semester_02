#pragma once

#include <memory>

#include "../queue/include/dllistnode.hpp"

namespace Datenstrukturen {
template<class T>
class DoublyLinkedList{
public:
  DoublyLinkedList();
  
  // Get the first Node of the current List
  DListNodeptr get_first() const;
  
  // Get the last Node of the current List
  DListNodeptr get_last() const;
  
  // Insert and delete Nodes
  
  DListNodeptr insert_last(T x);
  DListNodeptr remove_front();
  int size ();

  // Get the next Node of the current List
  DListNodeptr next(const DListNodeptr& n) const;
  
  // Get the previous Node of the current List
  DListNodeptr prev(const DListNodeptr& n) const;

  // Print the current List
  void print() const;

private:
  DListNodeptr head;
  DListNodeptr tail;
};

}