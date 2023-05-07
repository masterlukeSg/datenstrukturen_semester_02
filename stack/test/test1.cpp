#include <gtest/gtest.h>
#include "../include/stack.hpp"
#include "../src/stack.ipp"



using namespace ProjectAlpha;


TEST(stack, pop)
{
    stack<int> s;
    s.add(15);
    s.add(3);
    s.add(26);


    EXPECT_EQ(s.pop(),26);
}

TEST(stack, peek)
{

    stack<int> s;
    s.add(1);
    s.add(3);
    s.add(2);


    EXPECT_EQ(s.peek(), 2);
}

TEST(stack, isEmpty)
{


    stack<int> s;
    s.add(16);
    s.add(30);
    s.add(9);

    EXPECT_EQ(s.isempty(), false);
}

TEST(StackTest, add) {
  
  stack<int> s;

  
  s.add(5);
  s.add(7);
  s.add(12);

  
  EXPECT_EQ(s.getsize(), 3);

  
  EXPECT_EQ(s.pop(), 12);
}