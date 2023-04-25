#pragma once 
#include <iostream>
#include "../include/stacktemplate.hpp"
#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "../src/linkedlist.ipp"


namespace ProjectAlpha {


    template<class T>
    class stack : public stacktemplate<T> {
        public :

            stack();

            int getsize() override;
            void add(T) override;
            T pop() override;
            T peek();
            bool isempty();
            void stackDisplay();


        private :
        
            List<T> list; 

            
    };
// habe jz die template implementierung in eine ipp datei hinzugefügt anstatt das jz in der header datei zu machen
   
}