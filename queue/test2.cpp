#include <gtest/gtest.h>
#include "../include/queue.hpp"
#include "../include/queue.ipp"

TEST(queue, pop)
{

    queue<int> q;

    q.add(7);
    q.add(13);
    q.add(29);


    EXPECT_EQ(q.pop(), 7);
}