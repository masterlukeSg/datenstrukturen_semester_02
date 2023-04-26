#include "priorityqueueTemplate.hpp"
#include <vector>
#include <iostream>
#include <memory>
#include <list>
namespace ProjectAlpha
{
    template <class T, class prio>
    class Priorityqueue : public PriorityqueueTemplate<T, prio>
    {

    public:
        Priorityqueue();

        int get_size() override;
        void insert(T, prio) override;
        T extract_top() override;

    private:
        std::vector<T> queue;
        std::vector<prio> prioList;
    };
}

#include "../src/priorityqueue.ipp"
 
