#pragma once
#include "hashendemenge.hpp"
#include "list.hpp"
#include <memory>
#include <cstddef>
#include <iostream>
#include <string>
#include <functional>
#include <vector>

using namespace ProjectAlpha;

template <class T>
class hashendeMengerealisation : public abstract_hashendemenge<T>
{
public:
     hashendeMengerealisation(); // Konstruktor einer Hashtabelle

     void insert(const T x); // Siehe Interface abstract_hashendemenge<T>

     bool find(const T &x) const; // Siehe Interface abstract_hashendemenge<T>

     void remove(const T &x); // Siehe Interface abstract_hashendemenge<T>

     void print() const; // Druckt die Hashtabelle

     size_t size() const; // Gibt die Anzahl an Elementen der Hashtabelle zurueck

private:
     /**
      * @brief hashfkt
      * 
      */
     const std::function<size_t(const T &)> hashfkt; // Hashfunktion welche jeder Information eine Zahl zuordnent durch Zahl % num_buckets lässt dich das Bucket dieser Information zuordnen

     size_t num_buckets; // Anzahl an Buckets dieser Hashtabelle

     std::vector<List<T> > buckets; // Ein Vektor welcher die einzelnen Buckets enthällt welche durch Listen realiesiert werden

     void belegungsfaktor(); // Eine Funktion welche abhängig vom Fall die Anzahl an Buckets verdoppelt oder halbiert
};
