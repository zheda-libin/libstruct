//
// Created by libin on 2022/4/7.
//
#include <cstdio>
#include "binary_tree.h"
using namespace binary_tree;



void test1()
{
    BinTree node1 = CreateBTNode(6);
    BinTree node2 = CreateBTNode(2);
    BinTree node3 = CreateBTNode(7);
    BinTree node4 = CreateBTNode(5);
    BinTree node5 = CreateBTNode(4);
    BinTree node6 = CreateBTNode(0);

    LinkNode(node1, node2, node3);
    LinkNode(node2, node4, node5);
    LinkNode(node3, node6, nullptr);

    printf("\nPreOrder traserval:\n");
    PreOrder_Recurssive(node1);

    printf("\nInOrder traversal:\n");
    InOrder_Recurssive(node1);

    printf("\nPostOrder traversal:\n");
    PostOrder_Recurssive(node1);

    printf("\nPreOrder traserval (Non-regressive):\n");
    PreOrder_NonRecurssive(node1);

    printf("\nInOrder traserval (Non-regressive):\n");
    InOrder_NonRecurssive(node1);

    printf("\nPostOrder traserval (Non-regressive):\n");
    PostOrder_NonRecurssive(node1);

    printf("\nLevelOrder traserval:\n");
    LevelOrder(node1);
}


int main(int argc, char *argv[])
{
    test1();
    return 0;
}
