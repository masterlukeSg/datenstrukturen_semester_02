#pragma once 
#include <iostream>


namespace ProjectAlpha
{

    template <class K>
    class geordneteMengeTemplate
    {
        virtual void insert(K) = 0;
        virtual bool find(K) = 0;
        virtual void remove(K) = 0; //hier wieder void wurde eingefügt
    };

}