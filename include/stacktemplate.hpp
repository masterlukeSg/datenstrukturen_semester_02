#pragma once
#include <iostream>



namespace ProjectAlpha{


    template <class T>

    class stacktemplate {

        public:

        
        virtual int size()=0;
        virtual void add(const T& data)=0;
        virtual T pop()=0;

    };

}