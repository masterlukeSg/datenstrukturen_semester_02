#include <iostream>
#include "HashendeMenge.hpp"

using namespace ProjectAlpha;

class HashendeMengeRealisation : public HashendeMenge<int>
{
private:
    /* data */
public:
    void insert(int) override;
    bool find(int) override;
    void remove(int) override;
    // Belegungsfaktor wird errechnet, um die Buckets gleichmßig zu füllen
    void belegungsfaktor(int) override;
};
