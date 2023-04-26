#pragma once
#include <iostream>
#include "HashendeMenge.hpp"
#include <string>
#include "../include/list.hpp"
#include <vector>
#include <functional>

namespace ProjectAlpha
{

    template <class T>
    class HashendeMengeRealisation : public HashendeMenge<T>
    {
    private:
        // Die verwendete Hashfunktion.
        // Um den Bucket eines Elements x zu finden
        // kann die Hashfkt wie folgt verwendet werden
        //   hashfkt(x) % num_buckets;
        const std::function<size_t(const T &)> hashfkt;

        // Die aktuelle Anzahl der Buckets
        size_t num_buckets;

        // ToDO: List von AIcha implementieren
        std::vector<List<T>> buckets;

    public:
        // Konstruktor
        HashendeMengeRealisation();
        // Element einfügen
        void insert(T) override;

        // Gibt genau dann true zurück,
        // wenn das Element in der Hashtable enthalten ist
        bool find(T) override;

        // Element entfernen
        void remove(T) override;

        // Druckt alle Elemente der Hashtable
        void print();

        // Gibt Anzahl der Elemente zurück
        size_t size();
        // Belegungsfaktor wird errechnet, um die Buckets gleichmßig zu füllen
        void belegungsfaktor() override;
    };
}

