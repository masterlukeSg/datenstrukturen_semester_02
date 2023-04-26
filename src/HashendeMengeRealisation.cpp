#include <iostream>
#include <../include/HashendeMengeRealisation.hpp>
#include <string>
#include "../include/list.hpp"
#include <vector>
#include <functional>

namespace ProjectAlpha
{

    HashendeMengeRealisation::HashendeMengeRealisation() : hashfkt(std::hash<std::string>()), num_buckets(32)
    {
        buckets = std::vector<List<std::string>>(num_buckets);
    }

    void HashendeMengeRealisation::insert(std::string s)
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

    bool HashendeMengeRealisation::find(std::string s)
    {
        int buket = hashfkt(x) % num_buckets;
        ListNodeptr current = buckets[buket].get_head();
        while (current)
        {
            if (current->data_ == x)
                return true;
            current = current->next;
        }
        return false;
    }

    void HashendeMengeRealisation::remove(std::string s)
    {
        // gibt es das element
        if (!find(s))
            return;
        int buket = hashfkt(s) % num_buckets;
        ListNodeptr current = buckets[buket].get_head();

        // zu entfernende element ist head
        std::cout << "geklappt";
        if (current->data_ == s)
        {
            buckets[buket].remove_front();
            return;
        }

        // da das erste element oben schon gelöscht wird, klappt die Schleife
        ListNodeptr vorC = current;
        while (current)
        {
            if (current->data_ == s)
                buckets[buket].remove_after(vorC);
            vorC = current;
            current = vorC->next;
        }
    }

    /*
    size_t HashendeMengeRealisation::size()
    {
        return 0;
    }

    void HashendeMengeRealisation::print()
    {
    }
    */
    void HashendeMengeRealisation::belegungsfaktor()
    {

        std::vector<std::string> zwischenspeicher;

        for (int i = 0; i < num_buckets; i++)
        {
            ListNodeptr current = buckets[i].get_head();
            while (current)
            {
                zwischenspeicher.push_back(current->data_);
                current = current->next;
            }
        }

        num_buckets = num_buckets * 2;
        buckets = std::vector<List>(num_buckets);

        for (const std::string &wort : zwischenspeicher)
            insert(wort);
    }
}