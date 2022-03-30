//
// Created by libin on 2022/3/30.
//

#include "linked_list.h"

LinkList init()
{
    LinkList head = (LinkList)malloc(sizeof(LNode));
    head->next = nullptr;
    return head;
}
