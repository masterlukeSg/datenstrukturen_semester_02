#pragma once

#include <memory>

namespace Datenstrukturen
{

  template <class T>
  class DoublyLinkedListNode
  {
  public:
    DoublyLinkedListNode(T data);

    
  public:
    std::shared_ptr<DoublyLinkedListNode<T>> next;
    std::weak_ptr<DoublyLinkedListNode<T>> prev;

    T data_;
  };




  
  typedef std::shared_ptr<DoublyLinkedListNode<class T>> DListNodeptr;
  
  typedef std::weak_ptr<DoublyLinkedListNode<class T>> WeakDListNodeptr;

}
