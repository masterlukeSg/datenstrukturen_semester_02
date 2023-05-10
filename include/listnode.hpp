#pragma once
#include <memory>



namespace ProjectAlpha {

template <class T>
class ListNode{
  public:
  /**
   * @brief Listnode()
   * Construct a new List Node object
   * @param data 
   */
  ListNode(T data);


public:
 /**
  * @brief next
  * gibt das naechste Element von einem Knoten aus
  */
  std::shared_ptr<ListNode<T>> next;
 /**
  * @brief data
  * beinhaltet die Daten eines Knoten
  */
  T data_;
};



}











