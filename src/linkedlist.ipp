#include "list.hpp"
#include "../include/listnode.hpp"
#include "iostream"

namespace ProjectAlpha
{

    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::insert_front(T x)
    {
        std::shared_ptr<ListNode<T>> newPointer = std::make_shared<ListNode<T>>(x);
        newPointer->next = head;
        head = newPointer;
        return newPointer;
    }
    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::insert_after(const std::shared_ptr<ListNode<T>> &previousPointer, T x)
    {
        std::shared_ptr<ListNode<T>> newPointer = std::make_shared<ListNode<T>>(x);
        newPointer->next = previousPointer->next;
        previousPointer->next = newPointer;
        return newPointer;
    }

    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::remove_after(const std::shared_ptr<ListNode<T>> &previousPointer)
    {
        std::shared_ptr<ListNode<T>> toRemove = previousPointer->next;
        if (toRemove == nullptr)
            return nullptr;
        previousPointer->next = toRemove->next;
        toRemove->next = nullptr;
        return toRemove;
    }

    template <class T>
    std::shared_ptr<ListNode<T>> List<T>::remove_front()
    {
        if (!head)
            return nullptr;
        std::shared_ptr<ListNode<T>> toRemove = head;
        head = head->next;
        toRemove->next = nullptr;
    }
    template <class T>
    void List<T>::print() const
    {
        std::shared_ptr<ListNode<T>> current = head;
        while (current)
        {
            std::cout << current->data_ << " - > ";
            current = current->next;
        }
        std::cout << "null" << std::endl;
    }

}