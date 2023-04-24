#include <iostream>

namespace ProjektAlpha
{
    template <class K>
    class HashendeMenge
    {
    public:
        virtual HashendeMenge() = 0;
        virtual void insert(K) = 0;
        virtual bool find(K) = 0;
        virtual void remove(K) = 0;
        virtual void belegungsfaktor(K) = 0;
    };
}