#include <iostream>
#include <../include/HashendeMengeRealisation.hpp>
#include <string>
#include "../include/list.hpp"

HashendeMengeRealisation::HashendeMengeRealisation() : hashfkt(std::hash<std::string>()), num_buckets(32)
{
    buckets = std::vector<List<std::string>>(num_buckets);
}
void HashendeMengeRealisation::insert(std::string s)
{
    if (find(s))
        return;

    double sizeD = size();
    double num_bucketsD = num_buckets;

    if ((sizeD / num_bucketsD) < 0.75)
        buckets[hashfkt(s) % num_buckets].insert_front(s);

    else
    {
        belegungsfaktor();
        insert(s);
    }
}

bool HashendeMengeRealisation::find(std::string s)
{

    return false;
}

void HashendeMengeRealisation::remove(std::string s)
{

    // none
}

void HashendeMengeRealisation::belegungsfaktor()
{
}