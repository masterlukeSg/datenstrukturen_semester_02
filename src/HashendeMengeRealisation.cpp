#include <iostream>
#include <../include/HashendeMengeRealisation.hpp>
#include <string>
#include "../include/list.hpp"

HashendeMengeRealisation::HashendeMengeRealisation(): hashfkt(std::hash<std::string>()), num_buckets(32)
{
     buckets = std::vector<List<std::string>>(num_buckets);
}
void HashendeMengeRealisation::insert(std::string s)
{
    
}

bool HashendeMengeRealisation::find(std::string s)
{

    return false;
}

void HashendeMengeRealisation::remove(std::string s)
{

    // none
}

void HashendeMengeRealisation::belegungsfaktor(std::string s)
{
}