//
// Created by libin on 2022/4/9.
//

#ifndef LIBSTRUCT_SORT_H
#define LIBSTRUCT_SORT_H


namespace sort {
    typedef int ElementType;

    // 工具函数
    void WriteLine(int length=40);

    void Swap(ElementType & a, ElementType & b);

    void PrintArray(ElementType A[], int N);

    // 排序算法（假设所有的排序都是从小到大）

    void SelectSort(ElementType A[], int N, bool debug=false);

    void InsertSort(ElementType A[], int N, bool debug=false);

    void BubbleSort(ElementType A[], int N, bool debug=false);

    void QuickSort_v1(ElementType A[], int N, bool debug=false);

    // int N这个参数没有必要，我是为了学习的必要才添加的
    void QuickEngine_v1(ElementType A[], int Left, int Right, int N, bool debug);

    void QuickSort_v2(ElementType A[], int N, bool debug=false);

    void QuickEngine_v2(ElementType A[], int Left, int Right, int N, bool debug);
}



#endif //LIBSTRUCT_SORT_H
