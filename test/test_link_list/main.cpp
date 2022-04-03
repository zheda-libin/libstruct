//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include "linked_list.h"
using namespace link_list;


int main(int argc, char *argv[])
{
    int an[6] = {4, 2, 8, 5, 7, 1};
    int length = 6;

    // 4 -> 2 -> 8 -> 5 -> 7 -> 1
    List L = ArrayToList(an, length);
    PrintList(L);

    // 4 -> 2 -> 8 -> 5 -> 7 -> 1 -> -1
    Append(L, -1);
    PrintList(L);

    // 按位置查找
    int index = 6;
    ElementType val = FindKth(L, index);
    printf("an[%d] = %d\n", index, val);

    // 插入: 42 -> 4 -> 2 -> 8 -> 5 -> 7 -> 1 -> -1
    Insert(L, 42, 0);
    PrintList(L);

    // 插入：42 -> 4 -> 2 -> 8 -> 5 -> 7 -> 1 -> -1 -> 43
    Insert(L, 43, GetLength(L));
    PrintList(L);

    // 删除节点: 42 -> 4 -> 2 -> 5 -> 7 -> 1 -> -1 -> 43
    Delete(L, 3);
    PrintList(L);

    DeleteList(L);

    return 0;
}
