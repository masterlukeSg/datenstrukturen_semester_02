#pragma once 
#include <iostream>
#include "../include/stacktemplate.hpp"
#include "../include/list.hpp"
#include "../include/listnode.hpp"
#include "../src/linkedlist.ipp"


namespace ProjectAlpha {


    template<class T>
    class stack : public stacktemplate<T> {
        public :

            /**
             * @brief Construct a new stack object
             * 
             */
            stack();
            /**
             * @brief gibt die Größe des Stacks in integer zurück
             * 
             * @return int 
             */
            int getsize() override;
            /**
             * @brief fügt Elemente vorne in dem Stack ein 
             * 
             */
            void add(T) override;
            /**
             * @brief entfernt das erste Element vom Stack
             * 
             * @return T 
             */
            T pop() override;
            /**
             * @brief guckt auf das erste Element vom Stack ohne es zu löschen 
             * 
             * @return T 
             */
            T peek();
            /**
             * @brief überprüft ob das Stack leer ist
             * 
             * @return true 
             * @return false 
             */
            bool isempty();
            /**
             * @brief Funktion gibt das gesamte STack zurück 
             * 
             */
            void stackDisplay();


        private :


            /**
             * @brief Stack wird mithilfe eine Liste implementiert 
             * 
             */
            List<T> list; 

            
    };
// habe jz die template implementierung in eine ipp datei hinzugefügt anstatt das jz in der header datei zu machen
   
}