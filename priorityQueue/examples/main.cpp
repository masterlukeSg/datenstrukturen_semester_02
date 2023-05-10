#include "../include/pqreal.hpp"
#include <queue>
#include <iostream>
#include <vector>
#include <string>

// cmake -S . -B build && cmake --build build

using namespace ProjectAlpha;

int main()
{

    std::chrono::time_point<std::chrono::steady_clock> start, end;
    
    int z  = 10; 
    for (int d = 0; d < 7; d++)
    {
        std::vector<double> laufzeiten, biblaufzeiten;

        // 20 mal den Test durchlaufen
        for (int x = 0; x < 20; x++)
        {
            std::priority_queue<int> stdandardBib;
            PQueue_realisation<int, int> pq = PQueue_realisation<int, int>();

            // z Elemente in der Priority Queue bevor der Test ausgeführt wird
            for (int i = 0; i < z; i++)
            {
                int prio = rand() % 20;
                stdandardBib.push(prio);
                pq.insert(i, prio);
            }
            // startet die Clock
            start = std::chrono::steady_clock::now();
            //pq.remove();
            //pq.insert(4,4);
            pq.get_size();
            // endet die Clock
            end = std::chrono::steady_clock::now();

            laufzeiten.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count());

            // startet die Clock
            start = std::chrono::steady_clock::now();
            //stdandardBib.pop();
            //stdandardBib.push(4);
            stdandardBib.size();
            // endet die Clock
            end = std::chrono::steady_clock::now();

            biblaufzeiten.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count());
        }

        //std::cout << "TEST" << std::endl;

        double zeiten, bibzeiten;
        for (int b = 0; b < laufzeiten.size(); b++)
        {
            //std::cout << laufzeiten[b] << " |  " << biblaufzeiten[b] << std::endl;
            zeiten = laufzeiten[b] + zeiten;
            bibzeiten = biblaufzeiten[b] + bibzeiten;
        }
        std::cout << "FÜR: " << z << std::endl;
        std::cout << "Durchschnitt [MY]: " << zeiten / laufzeiten.size() << std::endl;
        std::cout << "Durchschnitt [STANDARD]: " << bibzeiten / biblaufzeiten.size() << std::endl;

        z = z * 10;
    }
}