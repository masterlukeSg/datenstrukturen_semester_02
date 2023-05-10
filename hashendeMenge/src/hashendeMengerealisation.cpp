#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "../include/hashendeMengerealisation.hpp"

#include <functional>
#include <iostream>
#include <string>
#include <memory>

using namespace ProjectAlpha;

/**
 * @brief Construct a new hashende Mengerealisation<T>::hashende Mengerealisation object
 * hachfkuntkion und numbuckets Werte werden gesetzt. Vector Buckets wir initalisiert
 * @tparam T
 */
template <class T>
hashendeMengerealisation<T>::hashendeMengerealisation() : hashfkt(std::hash<T>()),
                                                          num_buckets(32)
{
     buckets = std::vector<List<T>>(num_buckets);
}

/**
 * @brief Construct a new listnode<T>::listnode object
 * data_ = übergeben data und next = nullptr
 * @tparam T
 * @param data
 */
template <class T>
listnode<T>::listnode(T data)
{
     data_ = data;
     next = nullptr;
}

/**
 * @brief
 * Wenn element ex. wird buckets size überprüft. Wenn größer als 0,75 -> insert
 * wenn nicht, belegungsfaktor wird aufgerufen und danach insert fkt wieder
 *
 * @tparam T
 * @param x
 */
template <class T>
void hashendeMengerealisation<T>::insert(const T x)
{
     if (find(x))
     {
          throw std::logic_error("Das Element existiert bereits!");
          return;
     }
     double s = size();
     double a = num_buckets;

     if ((s / a) < 0.75)
     {
          buckets[hashfkt(x) % num_buckets].insert_front(x);
     }
     else
     {
          belegungsfaktor();
          insert(x);
     }
}

/**
 * @brief remove fkt
 * Wenn Element ex und size/numbuckest größer 0.25: element durch übergabe und hashfkt errechnet. Element entfernen.
 * Sonst belegungsfaktor und dann remove
 * @tparam T
 * @param x
 */
template <class T>
void hashendeMengerealisation<T>::remove(const T &x)
{
     if (not find(x))
     {
          throw std::logic_error("Das Element konnte nicht gefunden werden!");
          return;
     }
     double s = size();
     double a = num_buckets;

     if ((s / a) > 0.25)
     {
          int element = hashfkt(x) % num_buckets;
          std::shared_ptr<listnode<T>> aktuell = buckets[element].get_head();
          if (aktuell->data_ == x)
          {
               buckets[element].remove_front();
          }
          std::shared_ptr<listnode<T>> hilfe = aktuell;
          while (aktuell != nullptr)
          {
               if (aktuell->data_ == x)
               {
                    buckets[element].remove_after(hilfe);
                    break;
               }
               hilfe = aktuell;
               aktuell = aktuell->next;
          }
     }
     else
     {
          belegungsfaktor();
          remove(x);
     }
}
/**
 * @brief belegungsfaktor fkt.
 * Alle Daten im Zwischenspeicher speicheren. Wenn size/num_buckts größer gleich 0,75 wird die hashendeMenge verdoppelts
 * Sonst um mal 0,5 verkleinert
 * Danach werden die Zwischenspeicherdaten in die hashfkt wieder eingefügt
 *
 * @tparam T
 */
template <class T>
void hashendeMengerealisation<T>::belegungsfaktor()
{

     double s = size();
     double a = num_buckets;
     std::vector<T> zwischenspeicher;
     for (int i = 0; i < num_buckets; i++)
     {
          std::shared_ptr<listnode<T>> current = buckets[i].get_head();
          while (current != nullptr)
          {
               zwischenspeicher.push_back(current->data_);
               current = current->next;
          }
     }
     if ((s / a) >= 0.75)
     {
          num_buckets = num_buckets * 2;
     }
     else
     {
          num_buckets = num_buckets * 0.5;
     }
     buckets = std::vector<List<T>>(num_buckets);

     // for(const T &wort : zwischenspeicher)
     for (int i = 0; i < zwischenspeicher.size(); i++)
     {
          insert(zwischenspeicher[i]);
     }
}

/**
 * @brief print fkt
 * Gibt alle Werte aus der hashendeMenge wieder
 *
 * @tparam T
 */
template <class T>
void hashendeMengerealisation<T>::print() const
{
     for (int i = 0; i < num_buckets; i++)
     {
          buckets[i].print();
     }
     std::cout << "Hashtabelle gedruckt" << std::endl;
}

/**
 * @brief Gibt die größe der hashendeMenge wieder. Durch Loop wird durch die Menge durch iterriert und mit gezählt
 *
 * @tparam T
 * @return size_t
 */
template <class T>
size_t hashendeMengerealisation<T>::size() const
{
     int j = 0;
     for (int i = 0; i < num_buckets; i++)
     {
          std::shared_ptr<listnode<T>> current = buckets[i].get_head();
          while (current != nullptr)
          {
               j = j + 1;
               current = current->next;
          }
     }
     return j;
}

/**
 * @brief find funktion. Durch iterrieren wird geschaut, ob elemnt ex.
 *
 * @tparam T
 * @param x
 * @return true
 * @return false
 */
template <class T>
bool hashendeMengerealisation<T>::find(const T &x) const
{
     int Element = hashfkt(x) % num_buckets;
     std::shared_ptr<listnode<T>> current = buckets[Element].get_head();
     while (current != nullptr)
     {
          if (current->data_ == x)
          {
               return true;
          }
          else
          {
               current = current->next;
          }
     }
     return false;
}

/**
 * @brief Construct a new List< T>:: List object
 * Head = nullptr
 *
 * @tparam T
 */
template <class T>
List<T>::List()
{
     head = nullptr;
}

/**
 * @brief getHead
 * returnt head
 *
 * @tparam T
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::get_head() const
{
     return head;
}

/**
 * @brief insert_front fkt
 * setzte head auf neues element und head->next auf ehemaligen head.
 *
 * @tparam T
 * @param x
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::insert_front(T x)
{
     std::shared_ptr<listnode<T>> n = std::make_shared<listnode<T>>(x);
     if (head)
     {
          n->next = head;
          head = n;
     }
     head = n;
     return n;
}

/**
 * @brief print funktion
 * iterriert durch List und gibt alle Daten aus
 *
 * @tparam T
 */
template <class T>
void List<T>::print() const
{
     std::shared_ptr<listnode<T>> current = head;
     while (current)
     {
          std::cout << current->data_ << "->";
          current = current->next;
     }
     std::cout << "null" << std::endl;
}

/**
 * @brief Remove_Front
 * Entfert wenn ein Element in der Liste ex., dass erste Element
 *
 * @tparam T
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::remove_front()
{
     if (not head)
     {
          return nullptr;
     }
     std::shared_ptr<listnode<T>> neuerHead = head->next;
     head = neuerHead;
     return neuerHead;
}

/**
 * @brief Next Fkt
 * returnt next element vom übergebenen Parameter
 *
 * @tparam T
 * @param vorhaerigerknoten
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::next(const std::shared_ptr<listnode<T>> &vorhaerigerknoten)
{
     return vorhaerigerknoten->next;
}

/**
 * @brief Insert_After
 * erstellt neuen Knoten, neuer Knoten->next = vorheriger->next Knoten
 * vorheriger->next Knoten = neuerKnoten
 *
 * @tparam T
 * @param vorhaerigerknoten
 * @param x
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::insert_after(const std::shared_ptr<listnode<T>> &vorhaerigerknoten, T x)
{
     std::shared_ptr<listnode<T>> neuerNaechsterKnoten = std::make_shared<listnode<T>>(x);
     neuerNaechsterKnoten->next = vorhaerigerknoten->next;
     vorhaerigerknoten->next = neuerNaechsterKnoten;
     return neuerNaechsterKnoten;
}

/**
 * @brief Remove_After
 * löscht Element nach übergebenen Element
 *
 * @tparam T
 * @param vorhaerigerknoten
 * @return std::shared_ptr<listnode<T>>
 */
template <class T>
std::shared_ptr<listnode<T>> List<T>::remove_after(const std::shared_ptr<listnode<T>> &vorhaerigerknoten)
{
     std::shared_ptr<listnode<T>> loeschenKnoten = vorhaerigerknoten->next;
     vorhaerigerknoten->next = loeschenKnoten->next;
     return vorhaerigerknoten->next;
}
