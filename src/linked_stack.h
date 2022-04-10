//
// Created by libin on 2022/4/3.
//

#ifndef LIBSTRUCT_LINKED_STACK_H
#define LIBSTRUCT_LINKED_STACK_H

#define ERROR_CODE1 -9999

namespace link_stack {
    typedef int ElementType;
    struct SNode;
    typedef struct SNode *PtrToSNode;
    struct SNode {
        ElementType Data;
        PtrToSNode Next;
    };
    typedef PtrToSNode Stack;

    Stack MakeEmpty();

    bool IsEmpty(Stack S);

    bool Push(Stack S, ElementType X);

    ElementType Pop(Stack S);

    void PrintStack(Stack S);

    void DeleteStack(Stack S);
}


#endif //LIBSTRUCT_LINKED_STACK_H
