//
// Created by libin on 2022/3/30.
//

#ifndef ALGORITHMC_LINKED_LIST_H
#define ALGORITHMC_LINKED_LIST_H

#include <cstdlib>

#define ElementType int

typedef struct LNode{
    ElementType data;
    struct LNode * next;
} LNode, * LinkList;


LinkList init();

#endif //ALGORITHMC_LINKED_LIST_H
