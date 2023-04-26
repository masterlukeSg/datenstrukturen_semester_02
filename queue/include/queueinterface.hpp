#pragma once
#include <ioastream>

namespace ProjectAlpha{


    template <class T>
    class queueinterface {

        public:
            virtual int size()= 0;
            virtual void pop()=0;
            virtual T add() = 0;
    }; 
}
