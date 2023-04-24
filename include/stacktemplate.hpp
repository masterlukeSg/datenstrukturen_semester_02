#include <iostream>


namespace stacktemplate{


    template <class T>

    class stacktemplate {
        public:

        
        virtual int size()=0;
        virtual void add(T)=0;
        virtual auto pop()=0;

    };

}