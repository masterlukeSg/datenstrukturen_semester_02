#pragma once
#include <memory>
#include "listnode.hpp"
#include "E_Liste_Template.hpp"

namespace ProjectAlpha
{

    template <class T>
    class List : public E_Liste_Template<T>
    {

    public:
        List();

        /**
         * @brief insert_front()
         * insert at the front of the list
         * @param x
         * @return std::shared_ptr<ListNode<T>>
         */
        std::shared_ptr<ListNode<T>> insert_front(T x) override;
        /**
         * @brief insert_after()
         * insert after a given pointer in the List
         * @param current
         * @param x
         * @return std::shared_ptr<ListNode<T>>
         */
        std::shared_ptr<ListNode<T>> insert_after(const std::shared_ptr<ListNode<T>> &current, T x) override;
        /**
         * @brief remove_front()
         * removes at the front of the List
         * @return std::shared_ptr<ListNode<T>>
         */
        std::shared_ptr<ListNode<T>> remove_front() override;
        /**
         * @brief remove_after
         * removes after a given pointer
         * @param current
         * @return std::shared_ptr<ListNode<T>>
         */
        std::shared_ptr<ListNode<T>> remove_after(const std::shared_ptr<ListNode<T>> &current) override;

        /**
         * @brief next()
         * Get the next Node of the current List
         * @param current
         * @return std::shared_ptr<ListNode< T>>
         */
        std::shared_ptr<ListNode<T>> next(const std::shared_ptr<ListNode<T>> &current) override;

        /**
         * @brief print()
         * Print the current List
         */
        void print() const;



    private:
        /**
         * @brief head
         *Ist das erste Element der Liste
         */
        std::shared_ptr<ListNode<T>> head;
        T getHead();

    };

}
