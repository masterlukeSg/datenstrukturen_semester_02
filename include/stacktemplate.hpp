#pragma once
#include <iostream>



namespace ProjectAlpha{


    template <class T>

    class stacktemplate {

        public:

        
        virtual int getsize()=0;
        virtual void push(T)=0;
        virtual T remove()=0;

    };

}