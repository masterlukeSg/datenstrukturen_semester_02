#include "../include/stack.hpp"
#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include <iostream>

namespace ProjectAlpha{

    template<class T>
    stack<T>::stack(): list() {}

    template<class T>
    void stack<T>::push( T data){
        list.insert_front(data);
    }

    template<class T>
    T stack<T>::remove(){
        if (isempty()){
            std::cout << "Stack is Empty\n";
            return T();
        } else {
            T value = list.remove_front()->data_;
            return value;
        }
    }

    template<class T>
    T stack<T>::peek(){
        if (isempty()){
            std::cout << "Stack is Empty\n";
            return T();
        } else{
            return list.gethead()->data_;
        }
    }

    template<class T>
    bool stack<T>::isempty(){
        return (list.gethead() == nullptr);
    }

    template<class T>
    int stack<T>::getsize(){
        return list.size(); //stack fertig implementiert
    }

    template<class T>

    void stack<T>::stackDisplay(){
        return list.print();
    }

}
