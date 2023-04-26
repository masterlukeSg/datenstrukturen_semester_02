<<<<<<< Updated upstream
=======
#pragma once
>>>>>>> Stashed changes
#include <iostream>

namespace ProjectAlpha
{
<<<<<<< Updated upstream
    template <class T, class priority>
=======
    template <class T, class prio>
>>>>>>> Stashed changes
    class PriorityqueueTemplate
    {

    public:
        virtual int get_size() = 0;
<<<<<<< Updated upstream
        virtual void insert(T, priority) = 0;
        //virtual T extract_top() = 0;
        };
=======
        virtual void insert(T, prio) = 0;
        virtual T extract_top() = 0;
    };
>>>>>>> Stashed changes
}