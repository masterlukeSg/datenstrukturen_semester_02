#include <iostream>
#include <memory>
#include <string>
#include <functional>
#include <unordered_set>
#include "../src/hashendeMengerealisation.cpp"

using namespace ProjectAlpha;

// clang++ -std=c++17 -I./include src/hashendeMengeRealisation.cpp examples/main.cpp -o

int main()
{

    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::vector<double> myLauf, standLauf;
    int z = 10;

    for (int d = 0; d < 9; d++)
    {
        std::vector<double> laufzeiten, biblaufzeiten;

        // 20 mal den Test durchlaufen
        for (int x = 0; x < 10; x++)
        {
            std::unordered_set<int> stdandardBib;
            hashendeMengerealisation<int> pq = hashendeMengerealisation<int>();

            // z Elemente in der Priority Queue bevor der Test ausgeführt wird
            for (int i = 0; i < z; i++)
            {
                int prio = rand() % 20;
                if (i != 4)
                {
                    stdandardBib.insert(i);
                    pq.insert(i);
                }
            }
            // startet die Clock
            start = std::chrono::steady_clock::now();

            pq.find(4);

            // endet die Clock
            end = std::chrono::steady_clock::now();
            laufzeiten.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count());

            // startet die Clock
            start = std::chrono::steady_clock::now();

            stdandardBib.find(4);

            // endet die Clock
            end = std::chrono::steady_clock::now();
            biblaufzeiten.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count());
        }

        double zeiten, bibzeiten;
        for (int b = 0; b < laufzeiten.size(); b++)
        {
            // std::cout << laufzeiten[b] << " |  " << biblaufzeiten[b] << std::endl;
            zeiten = laufzeiten[b] + zeiten;
            bibzeiten = biblaufzeiten[b] + bibzeiten;
        }
        std::cout << "FÜR: " << z << std::endl;
        std::cout << "Durchschnitt [MY]: " << zeiten / laufzeiten.size() << std::endl;
        std::cout << "Durchschnitt [STANDARD]: " << bibzeiten / biblaufzeiten.size() << std::endl;

        myLauf.push_back(zeiten / laufzeiten.size());
        standLauf.push_back(bibzeiten / biblaufzeiten.size());
        z = z + 1000;
    }

    std::cout << "Meine Werte" << std::endl;

    for (double d : myLauf)
        std::cout << d << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "StandardBib Werte" << std::endl;

    for (double d : standLauf)
        std::cout << d << std::endl;
}
