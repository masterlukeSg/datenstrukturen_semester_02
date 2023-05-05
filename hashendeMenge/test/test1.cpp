#include <gtest/gtest.h>
#include "../src/hashendeMengerealisation.cpp"
#include <string>

using namespace ProjectAlpha;

// cmake -S . -B build && cmake --build build 

TEST(hashendeMengerealisation, find)
{

    hashendeMengerealisation<int> n;
    n.insert(5);

    EXPECT_EQ(n.find(5), true) << "Das Element wurde nicht gefunden";
}

TEST(hashendeMengerealisation, size)
{
    hashendeMengerealisation<int> n;
    for (int i = 0; i < 10; i++)
    {
        n.insert (i);
    }
    EXPECT_EQ(n.size(), 10) << "Die Size der HashendeMenge ist nicht richtig";

}