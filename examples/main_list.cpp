#include "../include/list.hpp"
#include <iostream>
#include "../include/listnode.hpp"
#include "../src/linkedlist.cpp"
#include <memory>
//#include <Doubly_Linked_List.hpp>




//
// Entry point of the program execution...
//
 using namespace ProjectAlpha;

 int main() {
    /**List<int> liste;

    liste.insert_front(15);
    liste.insert_front(17);
    liste.insert_front(9);
    liste.print();
    liste.remove_front();
    liste.print(); */   
    
    
    
    
    
    
    
    
    
    
    
    
    List<int> liste;
    
      std::shared_ptr<ListNode<int>> current;

    // prints the (empty) list
    liste.print();

    // adding 10, 30, 50 at the beginning of the list and printing it
    liste.insert_front(10);
    current = liste.insert_front(30);
    liste.insert_front(50);
    liste.print();

    // inserting 200 after 30, 100 after 30, 500 after 100 and printing it
    liste.insert_after(current, 200);
    current = liste.insert_after(current, 100);
    liste.insert_after(current, 500);
    liste.print();

    // removing 50 and printing it
    liste.remove_front();
    liste.print();

    // removing 500 and printing it
    liste.remove_after(current);
    liste.print();

    // removing after 10 (which is null) and printing it
    liste.remove_after(current -> next -> next);
    liste.print();
  
}




 