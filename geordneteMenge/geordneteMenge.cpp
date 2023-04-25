#include <iostream>
#include <geordneteMenge.hpp>
#include <vector>

namespace ProjectAlpha
{

    template <class K>
    class gerodneteMenge : public gerodneteMengeTemplate<class K >
    {   
        gerodneteMenge(){
            queue = std::vector<K>;
        }

        void insert(K) override
        {
        }

        bool find(K) override
        {
        }

        remove(K) override
        {
        }
    };
}
