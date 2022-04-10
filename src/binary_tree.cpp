//
// Created by libin on 2022/4/7.
//
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <queue>
#include "binary_tree.h"

using namespace std;


namespace binary_tree {
    BinTree CreateBTNode(ElementType val) {
        BinTree node = (BinTree) malloc(sizeof(struct BTNode));
        node->Data = val;
        return node;
    }


    void LinkNode(BinTree parent, BinTree left, BinTree right) {
        parent->Left = left;
        parent->Right = right;
    }


    // 可以把先序遍历、中序遍历、后续遍历看成是深度优先搜索
    void PreOrder_Recurssive(BinTree root) {
        if (root) {
            printf("%d\t", root->Data);
            PreOrder_Recurssive(root->Left);
            PreOrder_Recurssive(root->Right);
        }
    }


    void InOrder_Recurssive(BinTree root) {
        if (root) {
            InOrder_Recurssive(root->Left);
            printf("%d\t", root->Data);
            InOrder_Recurssive(root->Right);
        }
    }


    void PostOrder_Recurssive(BinTree root) {
        if (root) {
            PostOrder_Recurssive(root->Left);
            PostOrder_Recurssive(root->Right);
            printf("%d\t", root->Data);
        }
    }


    // 先序遍历，相当于边探索边访问（探索即访问）
    //  还有一种方法，跟层序遍历入队有点像，先右子树入栈，再左子树入栈，可惜地儿太小写不下
    void PreOrder_NonRecurssive(BinTree root) {
        stack<BinTree> s;
        while (root || !s.empty()) {
            while (root) {
                printf("%d\t", root->Data);
                s.push(root);
                root = root->Left;
            }
            if (!s.empty()) {
                root = s.top();
                s.pop();
                root = root->Right;
            }
        }
    }


    // 中序遍历，相当于访问后退栈时再访问
    void InOrder_NonRecurssive(BinTree root) {
        stack<BinTree> s;
        while (root || !s.empty()) {
            while (root) {
                s.push(root);
                root = root->Left;
            }
            if (!s.empty()) {
                root = s.top();
                printf("%d\t", root->Data);
                s.pop();
                root = root->Right;
            }
        }
    }

    // 后序遍历比较难，需要二次入栈，确定左右子树都遍历到，才能访问
    //   还有一种容易点的方法，和先序遍历类似，根左右->根右左->左右根
    void PostOrder_NonRecurssive(BinTree root) {
        stack<BinTree> s;
        BinTree pre = nullptr;
        while (root || !s.empty()) {
            while (root) {
                s.push(root);
                root = root->Left;
            }
            if (!s.empty()) {
                root = s.top();
                s.pop();
                if (!root->Right || root->Right == pre) {
                    printf("%d\t", root->Data);
                    pre = root;
                    root = nullptr;
                } else {
                    s.push(root);
                    root = root->Right;
                }
            }
        }
    }


    void LevelOrder(BinTree root) {
        if (!root)
            return;
        queue<BinTree> q;
        q.push(root);
        while (!q.empty()) {
            root = q.front();
            q.pop();
            printf("%d\t", root->Data);
            if (root->Left)
                q.push(root->Left);
            if (root->Right)
                q.push(root->Right);
        }
    }

}

