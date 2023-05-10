#pragma once 
#include <memory>

namespace ProjectAlpha {

template <class T>

class DoublyLinkedListNode{
public:
/**
 * @brief DoublyLinkedListNode()
 * Construct a new Doubly Linked List Node object
 * @param data 
 */
 DoublyLinkedListNode( T data);


public:
/**
 * @brief next
 * gets the next node after a given pointer
 */
  std::shared_ptr<DoublyLinkedListNode<T>> next;
/**
 * @brief prev
 * gets the previous node from a given pointer
 */
  std::weak_ptr<DoublyLinkedListNode<T>> prev;

/**
 * @brief data
 * gives the data of a node
 */
  T data_;
};


}

