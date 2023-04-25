#pragma once
#include <memory>

namespace Datenstrukturen {

template <class T>
class ListNode{
public:
  ListNode(T data);


public:
  std::shared_ptr<ListNode> next;
  
  auto data_;
};


typedef std::shared_ptr<ListNode> ListNodeptr;

}