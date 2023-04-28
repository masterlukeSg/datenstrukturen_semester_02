
#include <vector> // Array for maxheap

#include "../include/maxheap.hpp"

namespace ProjectAlpha{

    // initializing the array for maxheap
    MaxHeap::MaxHeap(){
        std::vector<int> maxheap;
    }

    // returns the parent of the given index
    int MaxHeap::get_parent(int index){
        if (index == 0){ return -1;}
        return (index-1)/2;
    }

    // returns the left child of the given index
    int MaxHeap::get_left_child(int index){
        if (2*index+1 > maxheap.size()){ return -1;}
        return (2*index + 1);
    }

    // returns the right child of the given index
    int MaxHeap::get_right_child(int index){
        if (2*index+2 > maxheap.size()) { return -1;}
        return (2*index + 2);
    }

    void MaxHeap::insert(int number){
        // adding it to the end of the array
        maxheap.push_back(number);
        int iterator = maxheap.size()-1;

        while (iterator != 0 && maxheap[get_parent(iterator)] < maxheap[iterator]){
            swap(maxheap[iterator], maxheap[get_parent(iterator)]);
            iterator = get_parent(iterator);
        }
    }

    void MaxHeap::swap(int &x, int &y){
        int tmp = x;
        x = y;
        y = tmp;
    }

}
