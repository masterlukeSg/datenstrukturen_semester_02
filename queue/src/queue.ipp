#include <iostream>
#include "../include/queue.hpp"
#include "../include/doublylinkedlist.hpp"
#include "../include/dllistnode.hpp"
#include <memory>

namespace ProjectAlpha {

    template <class T>
    queue<T>::queue() : list() {}
    


    template <class T>
    void queue<T>::add(T data) {
        list.insert_last(data);
    }

    template <class T>
    T queue<T>::pop() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is Empty\n");
            
        } else {
            T value = list.remove_front()->data_;
            return value;
        }
    }

    template <class T>
    int queue<T>::getSize() {
        return list.size();
    }

    template <class T>
    T queue<T>::peekTop() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is Empty\n");
        } else {
            return list.get_first()->data_;
        }
    }

    template <class T>
    T queue<T>::peekFirst() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is Empty\n");

        } else {
            return list.get_last()->data_;
        }
    }

    template <class T>
    bool queue<T>::isEmpty() {
    return list.size() == 0;
    }


    

    template <class T>
    void queue<T>::queueDisplay() const {

        return list.print();

    }
}

