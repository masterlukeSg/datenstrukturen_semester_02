#pragma once 
#include <memory>

namespace ProjectAlpha {

template <class T>

// A DoublyLinkedListNode stores its sucessor and predecessor
class DoublyLinkedListNode{
public:
 DoublyLinkedListNode( T data);

// Für ein nachvollziehbares Projekt sollte der folgende, schlechte Stil (!)
// nicht verwendet werden. Der schlechte Stil (Membervariablen sind public) wird
// hier nur deshalb verwendet, um die Datenstruktur schnell zu entwickeln.
public:
  std::shared_ptr<DoublyLinkedListNode<T>> next;
  std::weak_ptr<DoublyLinkedListNode<T>> prev;

  
  T data_;
};

// In the end, the DoublyLinkedListNode are dynamically organized on the heap.
// Therefore, we use Shared Pointer for the organization of DoublyLinkedListNode.
// It will turn out, that shared_ptr is the best way because we want
// to iterate through the nodes (i.e., we want multiple references at once).

// The type "std::shared_ptr<DoublyLinkedListNode>" is abbriviated with "DListNodeptr"
//typedef std::shared_ptr<DoublyLinkedListNode<class T>> DListNodeptr;
// The type "std::weak_ptr<DoublyLinkedListNode>" is abbriviated with "WeakDListNodeptr"
//typedef std::weak_ptr<DoublyLinkedListNode<class T>> WeakDListNodeptr;

}

