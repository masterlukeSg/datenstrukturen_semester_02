#pragma once 
#include <iostream> 


namespace ProjectAlpha {

    template <class T>

    class Dop_Liste_Template{

        public :

        virtual int get_size()=0;
        virtual node get_head()=0;
        virtual node get_Tail()=0;
        virtual successor get_next(Node)=0;
        virtual predecessor get_prev(Node)=0;
        virtual void insert_front(T)=0;
        virtual void remove_front()=0;
        virtual void insert_after(predecessor,T)=0;
        virtual void remove(Node)=0;
    };
}