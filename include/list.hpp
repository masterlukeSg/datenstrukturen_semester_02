#pragma once
#include <memory>
#include "listnode.hpp"
#include "E_Liste_Template.hpp"


namespace ProjectAlpha{

    template<class T>
    class List{

        public:
        List();

      // Insert and delete Nodes
     ListNodeptr insert_front(T x);
     ListNodeptr insert_after(const ListNodeptr& current, T x);
     ListNodeptr remove_front();
     ListNodeptr remove_after(const ListNodeptr& current);

     // Get the next Node of the current List
     ListNodeptr next(const ListNodeptr& current);

     // Print the current List
     void print() const;

     private:
     ListNodeptr head;
};

}

    




/*namespace ProjectAlpha {

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
*/