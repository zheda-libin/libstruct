//
// Created by libin on 2022/3/30.
//

#ifndef ALGORITHMC_LINKED_LIST_H
#define ALGORITHMC_LINKED_LIST_H

// ERROR_CODE定义：
// * ERROR_CODE1 -- 查找不到元素，返回ElementType
// * ERROR_CODE2 -- 查找不到元素，返回Position
#define ERROR_CODE1 -10000
#define ERROR_CODE2 nullptr

namespace link_list {

    // 类型设计
    typedef int ElementType;
    struct Node {
        ElementType Element;
        struct Node * Next;
    };
    typedef struct Node * PtrToNode;
    typedef PtrToNode List;
    typedef PtrToNode Position;

    // 函数设计
    // 说明：下面的函数实现均默认为有头结点(sentinel node)
    List MakeEmpty();

    int GetLength( List L );

    void Append( List L, ElementType X );

    void PrintList( List L );

    void DeleteList( List L );

    bool IsEmpty( List L );

    List ArrayToList( int an[], int length );

    ElementType FindKth( List L, int K );

    void Insert( List L, ElementType X, int i );

//    bool Insert( List L, ElementType X, int i );
//
//    Position Find(ElementType X, List L);
//
//    void Delete( ElementType X, List L );
//
//    Position FindPrevioous( ElementType X, List L );
//
//    Position Advance( Position P );
//
//    ElementType Retrieve( Position P );

}


#endif //ALGORITHMC_LINKED_LIST_H
