#pragma once 
#include <iostream>
#include <stacktemplate.hpp>

namespace ProjectAlpha {

    template <class T>

    class stack : public stacktemplate<T> {
        public :

            stack();
            int size() override;
            void add(T) override;
            auto pop() override;
            auto peek()override;
            bool isempty() override;

        private :

            int s_size;

    };
     
}