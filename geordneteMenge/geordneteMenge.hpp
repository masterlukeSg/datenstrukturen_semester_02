#pragma once 
#include <iostream>
#include "../geordneteMenge/geordneteMengeTemplate.hpp"

namespace ProjectAlpha
{

    template <class K>
    class geordneteMenge : public geordneteMengeTemplate< K>
    {
        geordneteMenge();
        void insert(K) override;
        bool find(K) override;
        void remove(K) override; // habe hier void hinzugefügt
    };

}