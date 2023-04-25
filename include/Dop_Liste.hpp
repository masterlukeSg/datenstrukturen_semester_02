#pragma once 
#include <iostream>
#include "Dop_Liste_Template.hpp"


namespace ProjectAlpha {

    template <class T>

    class Dop_Liste : public Dop_Liste_Template<T> {

        public:

         int get_size();
         node get_head();
         node get_Tail();
         successor get_next(Node);
         predecessor get_prev(Node);
         void insert_front(T);
         void remove_front();
         void insert_after(predecessor,T);
         void remove(Node);

    };
}
