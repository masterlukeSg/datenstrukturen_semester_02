#pragma once 
#include <iostream>
#include <stacktemplate.hpp>

namespace ProjectAlpha {

    template <T>
    class stack : public stacktemplate<T> {
        public :
            
            int size();
            void add(T);
            auto pop();

        private :

            int size;

    };
     
}