#pragma once
#include <iostream>

namespace ProjectAlpha{


    template <class T>
    class queueinterface {

        public:
            virtual int getSize()= 0;
            virtual T pop()=0;
            virtual void add(T) = 0;
    }; 
}
