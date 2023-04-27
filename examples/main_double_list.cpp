
#include "../include/Doubly_Linked_List.hpp"
#include "../include/Doubly_Linked_Listnode.hpp"
#include "../src/Double_Linked_List.cpp"
#include <memory>
#include <iostream>


//
// Entry point of the program execution...
//
 using namespace ProjectAlpha;

int main (){
  DoublyLinkedList<int> Liste;
  std::shared_ptr<DoublyLinkedListNode<int>> current;

  // prints the (empty) list
  Liste.print();

  // inserting 10, 30, 50 at the beginning of the list and printing it
  Liste.insert_front(10);
  current = Liste.insert_front(30);
  Liste.insert_front(50);
  Liste.print();

  // inserting 200 after 30, 100 after 30, 500 after 100 and printing it
  Liste.insert_after(current, 200);
  current = Liste.insert_after(current, 100);
  Liste.insert_after(current, 500);
  Liste.print();

  // removing 50 and printing it
  current = Liste.get_first();
  Liste.remove(current);
  Liste.print();

  // removing 500 and printing it
  current = Liste.get_first()->next->next;
  Liste.remove(current);
  Liste.print();

  // removing after 10 (which is null) and printing it
  Liste.remove(current->next->next);
  Liste.print();
}



  

