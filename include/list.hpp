#pragma once
#include <memory>
#include "listnode.hpp"
#include "E_Liste_Template.hpp"


namespace ProjectAlpha{

    template<class T>
    class List: public E_Liste_Template<T> {

        public:
        List();

      // Insert and delete Nodes
    std::shared_ptr<ListNode <T>> insert_front(T x) override;
    std::shared_ptr<ListNode<T>> insert_after(const std::shared_ptr<ListNode< T>>& current, T x) override;
    std::shared_ptr<ListNode< T>> remove_front()override;
    std::shared_ptr<ListNode<T>> remove_after(const std::shared_ptr<ListNode< T>>& current)override;

     // Get the next Node of the current List
     std::shared_ptr<ListNode< T>> next(const std::shared_ptr<ListNode< T>>& current)override;

     // Print the current List
     void print() const;

     private:
     std::shared_ptr<ListNode< T>> head;
};

}

    




