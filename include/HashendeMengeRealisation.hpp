#include <iostream>
#include "HashendeMenge.hpp"

namespace ProjectAlpha
{

    template <class K>
    class HashendeMengeRealisation : public HashendeMenge <K>
    {
    private:
        /* data */
    public:
        HashendeMengeRealisation();
        void insert(K) override;
        
    };

}