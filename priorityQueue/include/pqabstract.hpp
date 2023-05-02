#pragma once

#include <iostream>

namespace ProjectAlpha{

    template<class T, class Prio>
    class abstract_Pqueue
    {
    public:
          virtual int get_size() = 0;
          virtual void insert (T data, Prio prioritaet) = 0;
          virtual T remove() =0; 
    };

}