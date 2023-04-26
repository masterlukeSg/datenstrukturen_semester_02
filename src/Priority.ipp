#pragma once
#include "../include/Priority.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <iterator>

namespace ProjectAlpha{

    template <class S, class prio>
    Priority<S,prio>::Priority(){
    }

    template <class S, class prio>
    void Priority<S,prio>::print(){
        std::cout << " größe der liste: " << priorityList.size() << std::endl;
        for (prio p: priorityList)
            std::cout << p<< std::endl;
    }

    template <class S,class prio>
    void Priority<S, prio>::insert(S s,prio priorityElement){
       
       size_t size = priorityList.size();
       queue[priorityElement] = s;
        std::vector<prio> zwischenSpeicher;
         
        if (priorityList.size() == 0){
            priorityList.push_back(priorityElement);
            std::cout << " hier"<< std::endl;
        }
        
        else{
            for (int i = 0; i < size ; i++){  

                // wenn neue Priorität höher ist
                auto it = priorityList.begin();
                std::advance(it, i);
                std::cout << " geht um prio: "<< *it << std::endl;
                if ( *it < priorityElement){
                    std::advance(it, i);
                    priorityList.insert(it, priorityElement); 
                }
               
                else{
                    //std::advance(it, -i);
                    //priorityList.insert(it, priorityElement); 
                } 
            }
           
          
        }

    }
    
     



/*
    template <class S,class prio>
    S Priority<S, prio>::extract_top(){
        std::cout << " asugabe";

    }
    */

}