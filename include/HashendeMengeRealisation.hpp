#include <iostream>
#include "HashendeMenge.hpp"
#include <string>

using namespace ProjectAlpha;

class HashendeMengeRealisation : public HashendeMenge<std::string>
{
private:
    // Die verwendete Hashfunktion.
    // Um den Bucket eines Elements x zu finden
    // kann die Hashfkt wie folgt verwendet werden
    //   hashfkt(x) % num_buckets;
    const std::function<size_t(const std::string &)> hashfkt;

    // Die aktuelle Anzahl der Buckets
    size_t num_buckets;

    // ToDO: List von AIcha implementieren
    // std::vector<List> buckets;

public:
    // Konstruktor
    HashendeMengeRealisation();

    // Element einfügen
    void insert(std::string) override;

    // Gibt genau dann true zurück,
    // wenn das Element in der Hashtable enthalten ist
    bool find(std::string) override;

    // Element entfernen
    void remove(std::string) override;
   
    // Druckt alle Elemente der Hashtable
    void print() const;

    // Gibt Anzahl der Elemente zurück
    size_t size() const;
    // Belegungsfaktor wird errechnet, um die Buckets gleichmßig zu füllen
    void belegungsfaktor(std::string) override;
};
