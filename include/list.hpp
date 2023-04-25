#pragma once
#include <memory>
#include "../include/listnode.hpp"

namespace ProjectAlpha {

template <class T> 
class List{
    public:
    List(): head(nullptr) {}

    // Insert and delete Nodes
    std::shared_ptr<ListNode<T>> insert_front(T x);
    std::shared_ptr<ListNode<T>> insert_after(const std::shared_ptr<ListNode<T>>&, T x);
    std::shared_ptr<ListNode<T>> remove_front();
    std::shared_ptr<ListNode<T>> remove_after(const std::shared_ptr<ListNode<T>>&);

    // Get the next Node of the current List
    std::shared_ptr<ListNode<T>> next(const std::shared_ptr<ListNode<T>>&);

    // Print the current List
    void print() const;

    private:
    std::shared_ptr<ListNode<T>> head;
};

}