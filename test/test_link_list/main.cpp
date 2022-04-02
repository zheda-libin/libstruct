//
// Created by libin on 2022/4/1.
//
#include "linked_list.h"
using namespace link_list;


int main(int argc, char *argv[])
{
    int an[6] = {4, 2, 8, 5, 7, 1};
    int length = 6;

    List L = ArrayToList(an, length);
    link_list::PrintList(L);
    DeleteList(L);

    return 0;
}
