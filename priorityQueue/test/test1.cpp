#include <gtest/gtest.h>
#include "../include/pqreal.hpp"
#include <string>

using namespace ProjectAlpha;

// cmake -S . -B build && cmake --build build 

TEST(PQueue_realisation, remove)
{

    PQueue_realisation<std::string, int> pq = PQueue_realisation<std::string, int>();
    pq.insert("LukasIstCool", 15);
    pq.insert("ImeneIstCool", 16);
    pq.insert("TorgeIstCool", 14);
    
    EXPECT_EQ (pq.remove(),"ImeneIstCool") << "Das Element mit der höchsten Prioriätt wird nicht zurückgegeben";
    
}

TEST(PQueue_realisation, getHead)
{

    PQueue_realisation<std::string, int> pq = PQueue_realisation<std::string, int>();
    pq.insert("LukasIstCool", 15);
    pq.insert("ImeneIstCool", 16);
    pq.insert("TorgeIstCool", 14);
    
    EXPECT_EQ (pq.getHead(),"ImeneIstCool") << "Das Head Element wird nicht zuzrückgegebn";
    
}

TEST(PQueue_realisation, get_size)
{

    PQueue_realisation<std::string, int> pq = PQueue_realisation<std::string, int>();
    pq.insert("LukasIstCool", 15);
    pq.insert("ImeneIstCool", 16);
    pq.insert("TorgeIstCool", 14);
    
    EXPECT_EQ (pq.get_size(),3) << "Die Größe der PrioQueue ist nicht richtig";
    
}



