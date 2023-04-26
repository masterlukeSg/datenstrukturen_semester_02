<<<<<<< Updated upstream
#pragma once 
#include "priorityqueueTemplate.hpp"
#include <vector>
#include <iostream>
#include <memory>
#include <list>
namespace ProjectAlpha
{
    template <class T, class priority>
    class Priorityqueue : public PriorityqueueTemplate<T, priority>
    {
=======
#pragma once
#include "priorityqueueTemplate.hpp"
#include <vector>



namespace ProjectAlpha 
{

    template <class T, class prio>
    class Priorityqueue : public PriorityqueueTemplate<T, prio> {
>>>>>>> Stashed changes

    public:
        Priorityqueue();
        int get_size() override;
<<<<<<< Updated upstream
        void insert(T, priority) override;
       // T extract_top() override;

    private:
        std::vector<T> queue;
        std::vector<priority> prioList;


    

        
=======
        void insert(T, prio) override;
        T extract_top() override;

    private:
        std::vector<T> queue;
>>>>>>> Stashed changes
    };
}