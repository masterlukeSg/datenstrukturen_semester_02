#pragma once 
#include <iostream>
#include "../include/E_Liste_Template.hpp"


namespace ProjectAlpha {

    template <class T>

    class E_Liste : public E_Liste_Template<T> {

        public:

         E_Liste(); 
         int get_size();
         node get_head();
         node get_next(predecessor);
         void insert_front(T);
         void remove_front(T);
         void insert_after(predecessor,T);
         void remove_after(predecessor);


    };
}

