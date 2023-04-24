#include <iostream>


namespace stack{


    template <class T>


    class stack {
        public:

        
        virtual int size()=0;
        virtual void add(T)=0;
        virtual auto pop()=0;

    };

}