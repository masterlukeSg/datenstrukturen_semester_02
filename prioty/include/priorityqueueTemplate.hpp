#include <iostream>

namespace ProjectAlpha
{
    template <class T, class priority>
    class PriorityqueueTemplate
    {

    public:
        virtual int get_size() = 0;
        virtual void insert(T, priority) = 0;
        //virtual T extract_top() = 0;
        };
}