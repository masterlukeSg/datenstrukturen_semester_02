#include <gtest/gtest.h>
#include "../include/queue.hpp"
#include "../src/queue.ipp"


using namespace ProjectAlpha;

TEST(queue, pop)
{

    queue<int> q;

    q.add(7);
    q.add(13);
    q.add(29);


    EXPECT_EQ(q.pop(), 7);
}


TEST(queue, getSize)
{
    queue<int> q;
    q.add(7);
    q.add(13);
    q.add(29);
    q.add(7);
    q.add(13);
    q.add(29);
    q.add(7);
    q.add(13);
    q.add(29);

    EXPECT_EQ(q.getSize(), 9);
    

}


TEST(queue, isEmpty)
{
    queue<int> q;


    EXPECT_EQ(q.isEmpty(), true);
}


TEST(queue, peekTop)
{

    queue<int> q;

    q.add(55);
    q.add(66);
    q.add(90);
    q.add(131);
    q.pop();

    EXPECT_EQ(q.peekTop(), 66);
}

TEST(queue, peekLast)
{


    queue<int> q;

    q.add(3);
    q.add(17);
    q.add(13);
    q.add(11);
    

    EXPECT_EQ(q.peekLast(), 11);


}
