//
// Created by libin on 2022/4/3.
//
#include <cstdio>
#include <cstdlib>
#include "linked_stack.h"

namespace link_stack {
    Stack MakeEmpty() {
        PtrToSNode S = (PtrToSNode) malloc(sizeof(struct SNode));
        S->Next = nullptr;
        return S;
    }

    bool IsEmpty(Stack S) {
        if (!S)
            return true;
        else if (S->Next)
            return false;
        else
            return true;
    }

    // 疑惑：链栈到底应该用链表头当栈顶，还是链表尾当栈顶？
    bool Push(Stack S, ElementType X) {
        if (!S)
            return false;
        PtrToSNode tmp = (PtrToSNode) malloc(sizeof(struct SNode));
        tmp->Data = X;
        tmp->Next = S->Next;
        S->Next = tmp;
        return true;
    }

    ElementType Pop(Stack S) {
        if (IsEmpty(S)) {
            printf("Stack is empty, abort()\n");
            return ERROR_CODE1;
        } else {
            PtrToSNode top = S->Next;
            S->Next = top->Next;
            ElementType val = top->Data;
            free(top);
            return val;
        }
    }

    void PrintStack(Stack S) {
        while (S->Next) {
            printf("%d", S->Next->Data);
            if (S->Next->Next)
                printf(" <- ");
            S = S->Next;
        }
        printf("\n");
    }

    void DeleteStack(Stack S) {
        if (!S)
            abort();
        PtrToSNode cursor = S;
        while (S) {
            cursor = S;
            S = S->Next;
            free(cursor);
        }
    }

}


