#pragma once
#include "PriorityTemplate.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>

namespace ProjectAlpha{

    template <class S,class prio>
    class Priority: public PriorityTemplate<S,prio>{
        public:
            // docstream commentar vs code
            Priority();
            void print();
            void insert(S s,prio priorityElement);
            S extract_top();
            
        
        private: 
        //maxi heap
            std::map<prio, S> queue;
            //prioritäts Liste
            std::vector<prio> priorityList;

    };
}
