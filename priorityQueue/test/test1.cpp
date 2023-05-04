#include <gtest/gtest.h>
#include "../include/pqreal.hpp"
#include <string>

using namespace ProjectAlpha;

TEST(PQueue_realisation, remove)
{

    PQueue_realisation<std::string, int> pq = PQueue_realisation<std::string, int>();
    pq.insert("LukasIstCool", 15);
    pq.insert("ImeneIstCool", 16);
    pq.insert("TorgeIstCool", 14);
    
    EXPECT_EQ (pq.remove(),"ImeneIstCool");
    
}