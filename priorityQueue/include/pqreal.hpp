#ifndef PQUEUE_REAL
#define PQUEUE_REAL

#include "pqabstract.hpp"
#include "PQueuenode.hpp"
#include <vector>
#include <iostream>

using namespace ProjectAlpha;

/**
 * @brief Klasse welche eine Priority Queue realisiert
 *
 * @param T  Daten eines Knoten werden generisch gespeichert
 */
template <class T, class Prio>

class PQueue_realisation : public abstract_Pqueue<T, Prio>
{
public:
    /**
     * @brief Construct a new pqueue realisation object
     * size = 0
     */
    PQueue_realisation();

    /**
     * @brief Funktion welche die groesse der PriorityQueue zuruckgibt
     *
     * @return int
     */
    int get_size();
    
    /**
     * @brief  Funktion welche einen Knoten in die PriorityQueue hinzufuegt
     *
     * @param data
     * @param prioritaet
     */
    void insert(T data, int prioritaet);

    /**
     * @brief Funktion welche den Root entfernt
     * @return T
     */
    T remove();

    /**
     * @brief printet die Queue aus
     *
     */
    void print();

    /**
     * @brief Retunrs the Head object
     * 
     * @return T 
     */
    T getHead();

    /**
     * @brief "Schlange" vector, wo alle hinzugefuegten Daten drinnen gespeichert werden
     *
     */
    std::vector<PQnode<T, Prio> > Schlange;

private:
    /**
     * @brief size (varibale) von Schlange
     *
     */

    int size;
    /**
     * @brief Gibt den index vom Parent zurzück
     *
     * @param i
     * @return int
     */
    int parent(int i);

    /**
     * @brief Gibt index vom right_child zurück
     *
     * @param i
     * @return int
     */
    int right_child(int i);

    /**
     * @brief Gibt Index vom left child zurück
     *
     * @param i
     * @return int
     */
    int left_child(int i);

    /**
     * @brief Heapeigenschaft wiederherstellen, nachdem Wurzel entfernt wurde
     *
     * @param i
     */
    void shift_down(int i);

    /**
     * @brief Hepeigenschaft wiederherstellen, nachdem Knoten hinzugefuegt wurde
     *
     * @param i
     */
    void shift_up(int i);
};

#endif

template <class T, class Prio>
PQueue_realisation<T, Prio>::PQueue_realisation()
{
    size = 0;
}

template <class T, class Prio>
PQnode<T, Prio>::PQnode(T data, Prio prioritaet) : data_(data), prioritaet_(prioritaet)
{
}

template <class T, class Prio>
T PQnode<T, Prio>::get_data()
{
    return data_;
}

template <class T, class Prio>
int PQueue_realisation<T, Prio>::get_size()
{
    return size;
}


template <class T,class Prio>
T PQueue_realisation<T, Prio>::getHead(){
    if (size == 0){
        throw std::logic_error("Es gibt keine Elemente zum wiedergeben. (leere Liste)");
    }

    T result = Schlange[0].get_data();
    return result;
}


/**
 * @brief Insert Funktion
 * Erstellt einen neuen Node und fügt diesen in die "Schlange" ein.
 * Heapeigenschaft wiederherstellen: shift_up
 * Size um eins erhöhen
 * @tparam T
 * @tparam Prio
 * @param data
 * @param prioritaet
 */
template <class T, class Prio>
void PQueue_realisation<T, Prio>::insert(T data, int prioritaet)
{
    PQnode<T, Prio> p = PQnode<T, Prio>(data, prioritaet);
    Schlange.push_back(p);
    shift_up(size);
    size = size + 1;
}

/**
 * @brief gibt Parent wieder
 *
 *
 * @tparam T
 * @tparam Prio
 * @param i
 * @return int
 */
template <class T, class Prio>
int PQueue_realisation<T, Prio>::parent(int i)
{
    // TODO: 
    // end = std::chrono::steady_clock::now();
    int t = (i - 1) / 2;
    return t;
}

/**
 * @brief gibt rechtes Kind wieder
 *
 * @tparam T
 * @tparam Prio
 * @param i
 * @return int
 */
template <class T, class Prio>
int PQueue_realisation<T, Prio>::right_child(int i)
{
    int t = ((2 * i) + 2);
    return t;
}

/**
 * @brief gibt linkes Kind wieder
 *
 * @tparam T
 * @tparam Prio
 * @param i
 * @return int
 */
template <class T, class Prio>
int PQueue_realisation<T, Prio>::left_child(int i)
{
    int t = ((2 * i) + 1);
    return t;
}

/**
 * @brief Gibt die Priorität des Objekts wieder
 *
 * @tparam T
 * @tparam Prio
 * @return Prio
 */
template <class T, class Prio>
Prio PQnode<T, Prio>::get_prioritaet()
{
    return prioritaet_;
}

/**
 * @brief stellt die Heapeigenschaft von oben nach unten wieder her
 * ist die Priorität von i größer als von dessen parent, werden diese ELement im Vecktor an der stelle vertauscht
 * Geht solange, bis die Bedingung nicht mehr erfüllt ist
 * @tparam T
 * @tparam Prio
 * @param i
 */
template <class T, class Prio>
void PQueue_realisation<T, Prio>::shift_up(int i)
{
    while (i > 0 and (Schlange[i].get_prioritaet() > Schlange[parent(i)].get_prioritaet()))
    {

        PQnode<T, Prio> hilfe = Schlange[parent(i)];
        Schlange[parent(i)] = Schlange[i];
        Schlange[i] = hilfe;
        i = parent(i);
    }
}

/**
 * @brief Shift Down Funktion. Setzten max auf übergebenen Knoten. L und R = links und rechts index.
 * Wenn l kleiner gleich size (existiert linkes kind?) und priorität vom linken kind größer als aktueller Knoten -> max index auf l
 * Genau das gleiche für rechtes Kind
 * Wenn i != max -> Dann i und max index tauschen. Rekursivesaustuaschen bis fertig ist.
 * @tparam T
 * @tparam Prio
 * @param i<a
 */
template <class T, class Prio>
void PQueue_realisation<T, Prio>::shift_down(int i)
{
    int max_indx = i;
    int l = left_child(i);
    int r = right_child(i);
    if (l <= size and (Schlange[max_indx].get_prioritaet() < Schlange[l].get_prioritaet()))
    {
        max_indx = l;
    }
    if (r <= size and (Schlange[max_indx].get_prioritaet() < Schlange[r].get_prioritaet()))
    {
        max_indx = r;
    }
    if (i != max_indx)
    {

        PQnode<T, Prio> hilfe = Schlange[max_indx];
        Schlange[max_indx] = Schlange[i];
        Schlange[i] = hilfe;
        shift_down(max_indx);
    }
}

/**
 * @brief Remove funktion.
 * Tauscht letztes und erstes Element. Entfernt dann das letztes Element, ruft shift down auf und gibt das erste element zurcück
 *
 * @tparam T
 * @tparam Prio
 * @return T
 */
template <class T, class Prio>
T PQueue_realisation<T, Prio>::remove()
{   

    if (size == 0){
        throw std::logic_error("Es gibt keine Elemente zum entfernen. (leere Liste)");
    }

    T result = Schlange[0].get_data();
    Schlange[0] = Schlange[size - 1];
    size = size - 1;
    Schlange.pop_back();
    shift_down(0);
    return result;
}

/**
 * @brief Print. Gibt alle Elemente aus "Schlange aus"
 *
 * @tparam T
 * @tparam Prio
 */
template <class T, class Prio>
void PQueue_realisation<T, Prio>::print()
{
    for (int k = 0; k < size; k++)
    {
        std::cout << Schlange[k].get_data() << std::endl;
    }
}
