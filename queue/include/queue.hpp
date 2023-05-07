#pragma once 
#include <iostream>
#include "../include/queueinterface.hpp"
#include "../src/doublylinkedlist.ipp"
#include "../include/dllistnode.hpp"


namespace ProjectAlpha{

    template< class T>
    class queue: public queueinterface <T>{

        public:
        /**
         * @brief Erstellt ein Queue Objekt
         * 
         */
        explicit queue();
        /**
         * @brief add
         * die Funktion add() fügt Elemente hinten ein.
         * @param data 
         */
        void add( T data) override;
        /**
         * @brief pop() entfernt das erste Element vorne, dabei gibt sie das entfernte Element zurück
         * 
         * @return T 
         */
        T pop() override;
        /**
         * @brief gibt die Gröẞe der Queue als integer zurück
         * 
         * @return int 
         */
        int getSize() override;
        /**
         * @brief FUnktion peekTop() guckt auf das erste Element ohne es zu löschen 
         * 
         * @return T 
         */
        T peekTop();
        /**
         * @brief gibt das letze Element der Queue ohne es zu löschen an
         * 
         * @return T 
         */
        T peekLast();
        /**
         * @brief FUnktion isEmpty() guckt ob die Queue leer ist.
         * 
         * @return true 
         * @return false 
         */
        bool isEmpty();

        /**
         * @brief die gesamte Queue wird zurückgegeben 
         * 
         */
        void queueDisplay() const;

        private:

        /**
         * @brief Queue wird mit einer Liste realisiert
         * 
         */
        DLinkedList<T> list;


    };
}