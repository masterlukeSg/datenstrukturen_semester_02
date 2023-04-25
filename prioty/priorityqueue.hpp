#pragma once 
#include "priorityqueueTemplate.hpp"
#include <vector>
#include <memory>
namespace ProjectAlpha
{
    template <class T, class priority>
    class Priorityqueue : public PriorityqueueTemplate<T, priority>
    {

    public:
        Priorityqueue();
        int get_size() override{

        }
        void insert(T, priority) override;
        T extract_top() override;

    private:
        std::vector<T> queue;


    

        
    };
}