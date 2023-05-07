#pragma once
#include <memory>


namespace ProjectAlpha {

template <class T>
class ListNode{
public:
  ListNode(T data) : data_(data), next(nullptr) {}



  std::shared_ptr<ListNode<T>> next;//attribute hier sind public, da stack auf die zugreifen soll
  
  T data_; //da liste in stack wiederum privat stellt es kein problem 
};



}