#ifndef HEAPTREENODE
#define HEAPTREENODE
#include <iostream>
#include <vector>


namespace ProjectAlpha{

    template<class T,class Prio>
    class PQnode{
    public:
        /**
         * @brief Construct a new PQnode object
         * 
         * @param data 
         * @param prioritaet 
         */
        PQnode(T data, Prio prioritaet);

        /**
         * @brief Get the data object
         * 
         * @return T 
         */
        T get_data();  

        /**
         * @brief Get the prioritaet object
         * 
         * @return Prio 
         */
        Prio get_prioritaet();


    private:

        /**
         * @brief 
         * 
         */
        Prio prioritaet_;

        T data_;

    };
}






#endif