#include <iostream>
#include "../include/queue.hpp"
#include "../include/doublylinkedlist.hpp"
#include "../include/dllistnode.hpp"
#include <memory>

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
            std::cout<< "Queue is Empty\n";
            return T();

        }else {
             T value= list.remove_front()-> data_;
        }return value;
    }
    
    template <class T>
    int queue<T>::getSize(){
        return list.size();
    }


    template< class T >
    T queue<T>::peekTop() {
        if (isEmpty()){
            std::cout<< "Queue is Empty\n";
            return T();
        }else {
            return list.get_first()->data_;
        }
     
    }

    T queue<T>::peekFirst(){
        if (isEmpty()){
            std::cout<< "Queue is Empty\n";
            return T();

        }else {
            return list.get_last()->data_;
        }
    }

    bool queue<T>::isEmpty(){

        return (list.get_first()==nullptr);
    }

    void queue<T>::queueDisplay(){
        return list.print();
    }

}