#include "../include/list.hpp"
#include <iostream>
#include "../include/listnode.hpp"
#include "../src/linkedlist.cpp"
#include <memory>
#include <list>

using namespace ProjectAlpha;

int main()
{

    std::chrono::time_point<std::chrono::steady_clock> start, end;

    int z = 10;
    for (int d = 0; d < 7; d++)
    {
        std::vector<double> laufzeiten, biblaufzeiten;

        // 20 mal den Test durchlaufen
        // for (int x = 0; x < 20; x++)
        //{
        std::list<int> stdandardBib;
        List<int> pq = List<int>();

        // z Elemente in der Priority Queue bevor der Test ausgeführt wird
        for (int i = 0; i < z; i++)
        {
            int prio = rand() % 20;
            stdandardBib.push_front(prio);
            pq.insert_front(prio);
        }
        // startet die Clock
        start = std::chrono::steady_clock::now();
        // pq.remove();
        pq.insert_front(4);
        // pq.get_size();
        //  endet die Clock
        end = std::chrono::steady_clock::now();

        double my = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

        // startet die Clock
        start = std::chrono::steady_clock::now();
        // stdandardBib.pop();
        stdandardBib.push_front(4);
        // stdandardBib.size();
        //  endet die Clock
        end = std::chrono::steady_clock::now();

        double standard = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
        std::cout << my << " |  " << standard << std::endl;
    }

    // std::cout << "TEST" << std::endl;

    /*double zeiten, bibzeiten;
    for (int b = 0; b < laufzeiten.size(); b++)
    {
      // std::cout << laufzeiten[b] << " |  " << biblaufzeiten[b] << std::endl;
      zeiten = laufzeiten[b] + zeiten;
      bibzeiten = biblaufzeiten[b] + bibzeiten;


    std::cout << "FÜR: " << z << std::endl;
    std::cout << "Durchschnitt [MY]: " << zeiten  << std::endl;
    std::cout << "Durchschnitt [STANDARD]: " << bibzeiten << std::endl;
  }*/
    z = z * 10;
    //}
}