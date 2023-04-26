#include "../include/priorityqueue.hpp"
#include <iostream>
#include <vector>
#include <memory>
#include <list>
#include "priorityqueue.hpp"

namespace ProjectAlpha
{
    template <class T, class priority>
    Priorityqueue<T, priority>::Priorityqueue()
    {
    }

    template <class T, class priority>
    int Priorityqueue<T, priority>::get_size()
    {
        return queue.size();
    }

    template <class T, class priority>
    void Priorityqueue<T, priority>::insert(T x, priority prio)
    {

        for (int i = 0; i < queue.size(); i++)
        {
            if (prioList[i] <= prio)
            {
                queue[i] = x;
                prioList[i] = prio;
            }
            else
            {
                prioList.push_back(prio);
                queue.push_back(x);
            }
        }
    }

    template <class T, class priority>
    T Priorityqueue<T, priority>::extract_top()
    {
        
        return queue[0];
    }

}
