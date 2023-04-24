#include <iostream>

namespace ProjectAlpha
{
    template <class K>
    class HashendeMenge
    {
    public:
        HashendeMenge() = 0;
        virtual void insert(K) = 0;
        virtual bool find(K) = 0;
        virtual void remove(K) = 0;
        //Belegungsfaktor wird errechnet, um die Buckets gleichmßig zu füllen
        virtual void belegungsfaktor(K) = 0;
    };
}