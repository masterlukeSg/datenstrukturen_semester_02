#pragma once
#include "../include/Priority.hpp"
#include "../include/maxheap.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <iterator>

namespace ProjectAlpha
{

    template <class S, class prio>
    Priority<S, prio>::Priority()
    {
        //MaxHeap m;
    }

    template <class S, class prio>
    void Priority<S, prio>::print()
    {

        // Die eigentliche Printfunktion
        for (int i = 0; i < priorityList.size(); i++)
            std::cout << "Map: " << queue[priorityList[i]] << std::endl;
    }

    template <class S, class prio>
    void Priority<S, prio>::insert(S s, prio priorityElement)
    {

        // in map einfügen
        queue[priorityElement] = s;

        // in prioListe einfügen
        priorityList.push_back(priorityElement);

        // prioList nach größe sortieren
        for (int i = 0; i < priorityList.size(); i++)
        {
            prio kleinsterWert = priorityList[i];
            int index;

            for (int y = i; y < priorityList.size(); y++)
            {
                if (priorityList[y] >= kleinsterWert)
                {
                    kleinsterWert = priorityList[y];
                    index = y;
                }
            }

            // swap Prozess
            prio temp = priorityList[i];
            priorityList[i] = kleinsterWert;
            priorityList[index] = temp;
        }
    }

    template <class S, class prio>
    S Priority<S, prio>::extract_top()
    {
        S topElement = queue[priorityList[priorityList.size() - 1]];
        queue.erase(priorityList[0]);
        priorityList.erase(priorityList.begin());
        return topElement;
    }

}