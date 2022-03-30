//
// Created by libin on 2022/3/30.
//
#include <cstdio>
#include "linked_list.h"

int main()
{
    LinkList head = init();
    printf("Value: %d\n", head->data);
    return 0;
}
