#pragma once 
#include <iostream> 


namespace ProjectAlpha {

    template <class T>

    class E_Liste_Template{

        public :

        virtual int get_size()=0;
        virtual node get_head()=0;
        virtual node get_next(predecessor)=0;
        virtual void insert_front(T)=0;
        virtual void remove_front(T)=0;
        virtual void insert_after(predecessor,T)=0;
        virtual void remove_after(predecessor)=0;
    };
}
