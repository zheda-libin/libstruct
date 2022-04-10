//
// Created by libin on 2022/4/7.
//

#ifndef LIBSTRUCT_BINARY_TREE_H
#define LIBSTRUCT_BINARY_TREE_H

#define ERROR_CODE -9999

namespace binary_tree {
    typedef int ElementType;

    struct BTNode;
    typedef struct BTNode *PtrToBTNode;
    typedef PtrToBTNode BinTree;
    struct BTNode {
        ElementType Data = ERROR_CODE;
        BinTree Left = nullptr;
        BinTree Right = nullptr;
    };

    BinTree CreateBTNode(ElementType val);

    void LinkNode(BinTree parent, BinTree left, BinTree right);

    // 先序遍历，中序遍历，后续遍历，递归，非递归方法都有。
    void PreOrder_Recurssive(BinTree root);

    void InOrder_Recurssive(BinTree root);

    void PostOrder_Recurssive(BinTree root);

    void PreOrder_NonRecurssive(BinTree root);

    void InOrder_NonRecurssive(BinTree root);

    void PostOrder_NonRecurssive(BinTree root);

    void LevelOrder(BinTree root);

    //
    int GetHeight(BinTree root);
}


#endif //LIBSTRUCT_BINARY_TREE_H
