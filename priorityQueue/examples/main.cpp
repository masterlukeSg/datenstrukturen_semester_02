#include "../include/pqreal.hpp"
#include <queue>
#include <iostream>
#include <vector>
#include <string>

// cmake -S . -B build && cmake --build build

using namespace ProjectAlpha;

int main()
{

    std::priority_queue<int> stdandardBib;

    PQueue_realisation<int, int> pq = PQueue_realisation<int, int>();
    int z = 10;

    for (int y = 0; y < 8; y++)
    {
        std::chrono::time_point<std::chrono::steady_clock> start, end, ergebnis;

        for (int i = 0; i < z; i++)
        {
            int prio = rand() % 20;
            stdandardBib.push(prio);
            // pq.insert(i, prio);
        }

        start = std::chrono::steady_clock::now();


        //stdandardBib.push(7);
        //stdandardBib.pop();
        stdandardBib.size();
        //pq.insert(7, 5);
        // pq.remove();
        // pq.get_size();

        end = std::chrono::steady_clock::now();

        std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

        // std::cout << "Für die Anzahl: " << z << "  \nGeschwindigkeit: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << std::endl;
        std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << std::endl;
        // std::cout << z << std::endl;
        z = z * 10;
    }

    // pq.remove();

    // pq.print();
}