//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include "linked_stack.h"

using namespace link_stack;


int main(int argc, char *argv[]) {
    Stack S = MakeEmpty();
    // Steven chou, 9527
    Push(S, 9);
    Push(S, 5);
    Push(S, 2);
    Push(S, 7);

    // 7 <- 2 <- 5 <- 9
    PrintStack(S);

    // 2 <- 5 <- 9
    ElementType val = Pop(S);
    PrintStack(S);

    DeleteStack(S);

    return 0;
}
