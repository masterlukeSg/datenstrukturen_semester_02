#include <gtest/gtest.h>
#include "../src/linkedlist.cpp"
#include <memory>
#include "iostream"


using namespace ProjectAlpha;

TEST(List, insert_front)
{
    List<int> lis = List<int>();
    lis.insert_front(6);
    lis.insert_front(8);
    lis.insert_front(10);
    std::shared_ptr<ListNode<int> > zweitesElement = lis.insert_front(32);
    std::shared_ptr<ListNode<int> > erstesElement =  lis.insert_front(4);

    EXPECT_EQ(lis.insert_front(4)->data_, erstesElement->data_) << "Das erste Element wurde nicht richtig zurueck gegeben";
}

TEST(List,insert_after){

std::shared_ptr<ListNode<int> > eins,zwei,drei,vier;
List<int> lis = List<int>();
eins =  lis.insert_front(4);
zwei =lis.insert_after(eins,10);
drei = lis.insert_after(zwei,4);
vier = lis.insert_after(drei,7);
EXPECT_EQ(lis.insert_after(vier,8)->data_, vier->next->data_) <<"Das eingefuegte Element wurde nicht zurueckgegeben";
}

TEST(List,remove_front){
std::shared_ptr<ListNode<int> > erstesElement;
List<int> lis = List<int>();
lis.insert_front(5);
erstesElement=lis.insert_front (10);
lis.insert_front(15);
lis.remove_front();
EXPECT_EQ(lis.getHead(), erstesElement) << "Das erste Element wurde nicht zurueckgegeben";
}


