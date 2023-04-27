#pragma once

#include <memory>

namespace ProjectAlpha
{

  template <class T>
  class DListNode
  {
  public:
    DListNode(T data);

    
  
    std::shared_ptr<DListNode<T>> next;
    std::weak_ptr<DListNode<T>> prev;

    T data_;
  };




  
  //typedef std::shared_ptr<DoublyLinkedListNode<class T>> DListNodeptr;
  
  //typedef std::weak_ptr<DoublyLinkedListNode<class T>> WeakDListNodeptr;

}
