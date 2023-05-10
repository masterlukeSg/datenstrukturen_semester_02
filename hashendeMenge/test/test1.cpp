#include <gtest/gtest.h>
#include "../src/hashendeMengerealisation.cpp"
#include <string>

using namespace ProjectAlpha;

// cmake -S . -B build && cmake --build build

TEST(hashendeMengerealisation, find)
{

    hashendeMengerealisation<int> n;
    for (int i = 0; i < 10; i++)
        n.insert(i);

    int x = 9;
    EXPECT_EQ(n.find(x), true) << "Das Element [" << x << "] wurde nicht gefunden";
}

TEST(hashendeMengerealisation, size)
{
    hashendeMengerealisation<int> n;

    n.insert(3);
    n.insert(2);
    
    n.remove(2);

    EXPECT_EQ(n.size(), 1) << "Die Size der HashendeMenge ist nicht richtig";
}


TEST(hashendeMengerealisation, insert)
{
    hashendeMengerealisation<int> n;

    n.insert(3);
    n.insert(2);

    EXPECT_EQ(n.size(), 2) << "Die Insertfunktion der HashendeMenge funktioniert nicht";
}

TEST(hashendeMengerealisation, remove)
{
    hashendeMengerealisation<int> n;
    for (int i = 0; i < 10; i++)
        n.insert(i);
    int x = 6;
    n.remove(x);
    EXPECT_EQ(n.find(6), false) << "Das Element " << x << " wurde nicht entfert";

}