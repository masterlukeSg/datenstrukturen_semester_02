#include "../include/pqreal.hpp"

#include <iostream>
#include <vector>
#include <string>

// cmake -S . -B build && cmake --build build

using namespace ProjectAlpha;

int main()
{
    PQueue_realisation<int, int> pq = PQueue_realisation<int, int>();
    int z = 100;

    for (int y = 0; y < 6; y++)
    {
        std::chrono::time_point<std::chrono::steady_clock> start, end, ergebnis;

        for (int i = 0; i < z; i++)
        {
            int prio = rand() % 20;
            pq.insert(i, prio);
        }

        start = std::chrono::steady_clock::now();

        // pq.insert(7,5);
        // pq.remove();
        pq.get_size();

        end = std::chrono::steady_clock::now();

        std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

        std::cout << "Für die Anzahl: " << z << "  \nGeschwindigkeit: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << std::endl;
        z = z * 10;
    }

    // pq.remove();

    // pq.print();
}