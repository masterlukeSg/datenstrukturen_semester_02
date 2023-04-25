#pragma once
#include <iostream>



namespace ProjectAlpha{


    template <class T>

    class stacktemplate {

        public:

        
        virtual int size()=0;
        virtual void add(T)=0;
        virtual auto pop()=0;
        virtual auto peek()=0;
        virtual bool isempty()=0;

    };

}