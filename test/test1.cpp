#include <gtest/gtest.h>
#include "../include/list.hpp"
#i



using namespace ProjectAlpha;

TEST(List, insert_front)
{
 List < int> lis = List<int> lis();
 lis.insert_front(5);
 lis.insert_front(7);
 lis.insert_front(10);
 lis.insert_front(4);

 EXPECT_EQ(lis.getHead(),4) << "Das erste Element wurde nicht richtig zurueck gegeben";

}