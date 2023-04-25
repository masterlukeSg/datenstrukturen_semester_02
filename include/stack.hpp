#pragma once 
#include <iostream>
#include "../include/stacktemplate.hpp"
#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "../src/linkedlist.cpp"

namespace ProjectAlpha {

    template <class T>

    class stack : public stacktemplate<T> {
        public :

            stack(){}

            int getsize() override;
            void add(const T& data) override;
            T pop() override;
            T peek()override;
            bool isempty() override;


        private :
        
            List<T> list; 

            
    };
     
}