#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "iostream"

namespace Datenstrukturen
{
    ListNode::ListNode(T data)
    {
        data_ = data;
        next = nullptr;
    }
    List::List()
    {
        head = nullptr;
    }

    ListNodeptr List::insert_front(T x)
    {
        ListNodeptr neuerPointer = std::make_shared<ListNode>(x);

        neuerPointer->next = head; // neuerPointer nächstes Element Head
        head = neuerPointer;       // head zeigt auf neuen Pointer

        return neuerPointer;
    }

    ListNodeptr List::insert_after(const ListNodeptr &vorherigePointer, T x)
    {
        ListNodeptr neuerPointer = std::make_shared<ListNode>(x);
        neuerPointer->next = vorherigePointer->next; // neuer Pointer zeigt auf das vorherige nächste Element
        vorherigePointer->next = neuerPointer;
        return neuerPointer;
    }

    ListNodeptr List::remove_after(const ListNodeptr &vorherigePointer)
    {
        vorherigePointer->next = nullptr;
        return vorherigePointer->next;
    }

    ListNodeptr List::remove_front()
    {
        if (!head)
            return nullptr;
        
        ListNodeptr toRemove = head->next;
        head = toRemove;

        return head;
    }

    ListNodeptr List::next(const ListNodeptr &ptr)
    {
        return ptr->next;
    }

    void List::print() const
    {
        ListNodeptr current = head;
        while (current)
        {
            std::cout << current->data_ << " - > ";
            current = current->next;
        }
        std::cout << "null" << std::endl;
    }

}