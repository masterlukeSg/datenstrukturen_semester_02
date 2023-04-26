#pragma once
#include <memory>
#include "listnode.hpp"
#include "E_Liste_Template.hpp"


namespace ProjectAlpha{

    template<class T>
    class List{

        public:
        List();

      // Insert and delete Nodes
     ListNodeptr insert_front(T x);
     ListNodeptr insert_after(const ListNodeptr& current, T x);
     ListNodeptr remove_front();
     ListNodeptr remove_after(const ListNodeptr& current);

     // Get the next Node of the current List
     ListNodeptr next(const ListNodeptr& current);

     // Print the current List
     void print() const;

     private:
     ListNodeptr head;
};

}

    




