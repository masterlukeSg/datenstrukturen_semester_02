#include <iostream>
#pragma once

namespace ProjectAlpha{
    template <class T>

    class prioQueue_Template{

        public: 

        virtual int get_size()=0;
        virtual Iterator get_Iter()=0;
        virtual void insert(T,priority)=0;
        virtual T extract_top()=0;
    }
}