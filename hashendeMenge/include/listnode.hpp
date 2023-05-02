#pragma once
#include <memory>
#include <string>
namespace ProjectAlpha
{

  template <class T>
  class ListNode
  {

  public:
    ListNode(T data) : data_(data), next(nullptr) {}

    std::shared_ptr<ListNode<T> > next;

    T data_;
  };

  typedef std::shared_ptr<ListNode<std::string> > ListNodeptr;

}