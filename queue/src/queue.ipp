#include <iostream>
#include "../queue/include/queue.hpp"
#include "../queue/include/doublylinkedlist.hpp"
#include "../queue/include/dllistnode.hpp"

namespace ProjectAlpha{

    template <class T>
    queue<T>::queue() : DoublyLinkedList(){}

    template <class T> 
    void queue<T>::add(T data){
        list.insert_last(data);
    }

    template <class T>
    T queue<T>::pop(){
        if (isEmpty()){
            std::cout<< "Queue is Empty\n"
            return T();

        }else {
             T value= list.remove_front()-> data_;
        }return value;
    }

}