#include <iostream>
#include <memory>
#include <string>

#include "../src/hashendeMengerealisation.cpp"

using namespace ProjectAlpha;

// clang++ -std=c++17 -I./include src/hashendeMengeRealisation.cpp examples/main.cpp -o

int main()
{

    hashendeMengerealisation<int> n;
   
    for (int i = 0; i < 100; i++)
    {
        n.insert(i);
    }

   
    //std::cout << ergebnis.max() << std::endl;
   // std::cout << ergebnis.min()<< std::endl;
    // n.insert("W");
    // n.remove("Z");
    n.print();
}
