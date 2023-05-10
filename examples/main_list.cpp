#include "../include/list.hpp"
#include <iostream>
#include "../include/listnode.hpp"
#include "../src/linkedlist.cpp"
#include <memory>

//
// Entry point of the program execution...
//
 using namespace ProjectAlpha;

 int main() {
   try{
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

catch(std::logic_error E){
  std::cout<<"Ausnahme"<< E.what()<< "behandelt" << std::endl;
}

}