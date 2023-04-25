#pragma once
#include <memory>


namespace ProjectAlpha {

template <class T>
class ListNode{
public:
  ListNode(T data) : data_(data), next(nullptr) {}


public:
  std::shared_ptr<ListNode<T>> next;
  
  T data_;
};



}