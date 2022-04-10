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
}



#endif //LIBSTRUCT_SORT_H
