#include <iostream>
#include "../geordneteMenge/geordneteMenge.hpp"
#include <vector>

namespace ProjectAlpha
{

    /*template <class K>
    class gerodneteMenge : public gerodneteMengeTemplate< K > // ich würde hier wieder nur namespace benutzen anstatt jz class wieder neu zu definieren 
    {  */ 

         //vergiss auch nicht cpp datei zu ipp datei zu ändern 
        template <class K>
        geordneteMenge<K>::geordneteMenge(){
            //queue = std::vector<K>; //queue wurde hier nicht deklariert ist nicht besser std::vector<K> queue;
            std::vector<K> queue;
        }
        template <class K>
        void geordneteMenge<K>::insert(K) 
        {
        }
        template<class K>
        bool geordneteMenge<K>::find(K) 
        {
        }
        template <class K> 
         void geordneteMenge<K>::remove(K)   
        {
        }
    //};
}
