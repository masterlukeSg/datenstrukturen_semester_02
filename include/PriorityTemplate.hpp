
#pragma once
#include <iostream>
#include <string>
namespace ProjectAlpha{


    template<class S, class prio>
    class PriorityTemplate{

        public:
            virtual void insert(S,prio) = 0;
           // virtual S extract_top() = 0;


    };


}