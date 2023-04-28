#pragma once

#include <vector> // Array for maxheap

namespace ProjectAlpha{

    // A class of a maxheap
    class MaxHeap{
    public:
        MaxHeap();

        int get_parent(int index);

        int get_left_child(int index);

        int get_right_child(int index);

        void insert(int number);

        void swap(int &x, int &y);

    private:
        std::vector<int> maxheap;
    };
}
