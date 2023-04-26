#include <iostream>
#include <../include/HashendeMengeRealisation.hpp>
#include <string>
#include "../include/list.hpp"
#include <vector>
#include <functional>

namespace ProjectAlpha
{
    template <class T>
    HashendeMengeRealisation<T>::HashendeMengeRealisation() : hashfkt(std::hash<T>()), num_buckets(32)
    {
        buckets = std::vector<List<T>>(num_buckets);
    }
    
    template <class T>
    void HashendeMengeRealisation<T>::insert(T s)
    {
        if (find(s))
            return;

        double sizeD = size();
        double num_bucketsD = num_buckets;

        if ((sizeD / num_bucketsD) < 0.75)
            buckets[hashfkt(s) % num_buckets].insert_front(s);

        else
        {
            belegungsfaktor();
            insert(s);
        }
    }
    template <class T>
    bool HashendeMengeRealisation<T>::find(T s)
    {
        int buket = hashfkt(s) % num_buckets;
        std::shared_ptr<ListNode<T>> current = buckets[buket].get_head();
        while (current)
        {
            if (current->data_ == s)
                return true;
            current = current->next;
        }
        return false;
    }

    template <class T>
    void HashendeMengeRealisation<T>::remove(T s)
    {
        // gibt es das element
        if (!find(s))
            return;
        int buket = hashfkt(s) % num_buckets;
        std::shared_ptr<ListNode<T>> current = buckets[buket].get_head();

        // zu entfernende element ist head
        std::cout << "geklappt";
        if (current->data_ == s)
        {
            buckets[buket].remove_front();
            return;
        }

        // da das erste element oben schon gelöscht wird, klappt die Schleife
        std::shared_ptr<ListNode<T>> vorC = current;
        while (current)
        {
            if (current->data_ == s)
                buckets[buket].remove_after(vorC);
            vorC = current;
            current = vorC->next;
        }
    }

    template <class T>
    size_t HashendeMengeRealisation<T>::size()
    {
        int j = 0;
        for (int i = 0; i < num_buckets; i++)
        {
            std::shared_ptr<ListNode<T>> current = buckets[i].get_head();
            while (current)
            {
                j++;
                current = current->next;
            }
        }
        return j;
    }

    template <class T>
    void HashendeMengeRealisation<T>::print()
    {
        for (int i = 0; i < num_buckets; i++)
            buckets[i].print_Liste();
    }

    template <class T>
    void HashendeMengeRealisation<T>::belegungsfaktor()
    {

        std::vector<T> zwischenspeicher;

        for (int i = 0; i < num_buckets; i++)
        {
            std::shared_ptr<ListNode<T>> current = buckets[i].get_head();
            while (current)
            {
                zwischenspeicher.push_back(current->data_);
                current = current->next;
            }
        }

        num_buckets = num_buckets * 2;
        buckets = std::vector<List<T>>(num_buckets);

        for (const T &wort : zwischenspeicher)
            insert(wort);
    }
}