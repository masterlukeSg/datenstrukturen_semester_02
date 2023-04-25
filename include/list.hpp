#pragma once
#include <memory>
#include "../include/listnode.hpp"

namespace Datenstrukturen {

template <class T> 
class List{
public:
  List();

  // Insert and delete Nodes
  ListNodeptr insert_front(T x);
  ListNodeptr insert_after(const ListNodeptr&, T x);
  ListNodeptr remove_front();
  ListNodeptr remove_after(const ListNodeptr&);

  // Get the next Node of the current List
  ListNodeptr next(const ListNodeptr&);

  // Print the current List
  void print() const;

private:
  ListNodeptr head;
};

}