//
// Created by libin on 2022/3/30.
//
#include <cstdlib>
#include <cstdio>
#include "linked_list.h"


namespace link_list {
    List MakeEmpty() {
        PtrToNode head = (PtrToNode) malloc(sizeof(struct Node));
        head->Next = nullptr;
        return head;
    }


    // 获得链表长度，-1代表不合法的空指针，合法范围0~无穷
    int GetLength(List L) {
        if (L == nullptr) {
            return ERROR_CODE1;
        }
        int cnt = 0;
        // 如果带头结点，需要判断L->Next是否为nullptr
        // 如果不带头结点，需要判断L本身是否为nullptr
        while (L->Next != nullptr) {
            ++cnt;
            L = L->Next;
        }
        return cnt;
    }


    // 因为指针类型是值拷贝，不会修改传入参数
    void Append(List L, ElementType X) {
        if (L == nullptr) {
            printf("Invalid Linked List\n");
            abort();
        }
        PtrToNode node = (PtrToNode) malloc(sizeof(struct Node));
        node->Element = X;
        node->Next = nullptr;
        while (L->Next != nullptr) {
            L = L->Next;
        }
        L->Next = node;
    }


    void PrintList(List L) {
        if (L == nullptr) {
            abort();
        }

        printf("[Length: %d] ", GetLength(L));
        while (L->Next != nullptr) {
            printf("%d", L->Next->Element);
            // 如果未到达最后元素
            if (L->Next->Next != nullptr)
                printf(" -> ");
            L = L->Next;
        }
        printf("\n");
    }


    void DeleteList(List L) {
        if (L == nullptr)
            abort();
        while (L->Next != nullptr) {
            PtrToNode node = L;
            L = L->Next;
            free(node);
        }
    }


    bool IsEmpty(List L) {
        if (L == nullptr)
            abort();
        if (L->Next == nullptr)
            return true;
        else
            return false;
    }


    List ArrayToList(int an[], int length) {
        List L = MakeEmpty();
        for (int i = 0; i < length; ++i) {
            Append(L, an[i]);
        }
        return L;
    }

    // K的有效范围：0 ~ N-1
    ElementType FindKth( List L, int K )
    {
        int length = GetLength(L);
        // sanity check
        if (K < 0 || K >length-1 || length == ERROR_CODE1)
        {
            printf("Invalid find position\n");
            return ERROR_CODE1;
        }
        int cnt = 0;
        // 因为上述已经sanity check过，所以不会出现L->Next为空指针情况
        // 离开条件，cnt == K.
        while(cnt < K)
        {
            L = L->Next;
            ++cnt;
        }
        return L->Next->Element;
    }

    // 插入情况下，范围i：0 ~ N
    void Insert( List L, ElementType X, int K )
    {
        int length = GetLength(L);
        // sanity check
        if (K<0 || K>length || length == ERROR_CODE1)
        {
            printf("Invalid insertion position\n");
            return;
        }

        // 出口条件，cnt == K，K的范围0 ~ N (共N+1)
        int cnt = 0;
        while(cnt < K)
        {
            L=L->Next;
            ++cnt;
        }
        PtrToNode tmp = (PtrToNode)malloc(sizeof(struct Node));
        tmp->Element = X;
        tmp->Next = L->Next;
        L->Next = tmp;
    }

}
