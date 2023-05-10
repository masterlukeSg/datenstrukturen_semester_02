#pragma once
#include <memory>
#include "../include/Doubly_Linked_List.hpp"

#include "../include/Dop_Liste_Template.hpp"


namespace ProjectAlpha{

template <class T>

class DoublyLinkedList: public Dop_Liste_Template<T> {

 public:
 DoublyLinkedList();
  /**
   * @brief get_first()
   * Get the first Node of the current List
   * @return std::shared_ptr<DoublyLinkedListNode<T>> 
   */
  std::shared_ptr<DoublyLinkedListNode<T>> get_first() override;
  
  /**
   * @brief get_last()
   * Get the last Node of the current List
   * @return std::shared_ptr<DoublyLinkedListNode<T>> 
   */
  std::shared_ptr<DoublyLinkedListNode<T>> get_last()  override;
  
 /**
  * @brief insert_front()
  * insert infront of a given pointer
  * @param x 
  * @return std::shared_ptr<DoublyLinkedListNode<T>> 
  */
  std::shared_ptr<DoublyLinkedListNode<T>> insert_front(T x) override;
  /**
   * @brief insert_after()
   * inserts after a given pointer
   * @param prev 
   * @param x 
   * @return std::shared_ptr<DoublyLinkedListNode<T>> 
   */
  std::shared_ptr<DoublyLinkedListNode<T>> insert_after(const std::shared_ptr<DoublyLinkedListNode<T>>& prev, T x) override;
  /**
   * @brief remove
   * removes a given pointer
   * @param n 
   * @return std::shared_ptr<DoublyLinkedListNode<T>> 
   */
  std::shared_ptr<DoublyLinkedListNode<T>> remove(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;

  /**
   * @brief next()
   * Get the next Node of the current List
   * @param n 
   * @return std::shared_ptr<DoublyLinkedListNode<T>> 
   */
  std::shared_ptr<DoublyLinkedListNode<T>> next(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;
  
  /**
   * @brief prev()
   * Get the previous Node of the current List
   * @param n 
   * @return std::weak_ptr<DoublyLinkedListNode<T>> 
   */
  std::weak_ptr<DoublyLinkedListNode<T>> prev(const std::shared_ptr<DoublyLinkedListNode<T>>& n)override;

 /**
  * @brief print()
  * Print the current List
  */
  void print() const;

private:
  /**
   * @brief head
   * Is the first element in the list
   */
  std::shared_ptr<DoublyLinkedListNode<T>> head;
  /**
   * @brief tail
   * gets the last element of the list
   */
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
