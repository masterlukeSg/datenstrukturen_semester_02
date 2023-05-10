#pragma once
#include "HashendeMenge.hpp"
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
     /**
      * @brief Construct a new hashende Mengerealisation object
      *
      */
     hashendeMengerealisation(); 
     
     /**
      * @brief insert Funktion. Fügt Element hinzu
      *
      * @param x
      */
     void insert(const T x); 

     /**
      * @brief Find fkt: findet übergebens Element
      * 
      * @param x 
      * @return true 
      * @return false 
      */
     bool find(const T &x) const; 

     /**
      * @brief Remove fkt. Entfernt elemtn
      * 
      * @param x 
      */
     void remove(const T &x); 


     /**
      * @brief druckt alle daten der hashendemengen aus
      * 
      */
     void print() const; 

     /**
      * @brief Size fkt (gibt size wieder zurück)
      * 
      * @return size_t 
      */
     size_t size() const; 

private:
     /**
      * @brief hashfkt Hashfunktion welche jeder Information eine Zahl zuordnent durch Zahl % num_buckets lässt dich das Bucket dieser Information zuordnen
      *
      */
     const std::function<size_t(const T &)> hashfkt;

     /**
      * @brief num_buckest 
      * Anzahl an Buckets dieser Hashtabelle
      * 
      */
     size_t num_buckets; 

     /**
      * @brief buckets
      * Ein Vektor welcher die einzelnen Buckets enthällt welche durch Listen realiesiert werden
      */
     std::vector<List<T> > buckets; 

     /**
      * @brief belegungsfaktor Funktion
      * ine Funktion welche abhängig vom Fall die Anzahl an Buckets verdoppelt oder halbiert
      */
     void belegungsfaktor();
};
