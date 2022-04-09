//
// Created by libin on 2022/4/9.
//

#ifndef LIBSTRUCT_SORT_H
#define LIBSTRUCT_SORT_H


namespace sort {
    typedef int ElementType;

    // 工具函数

    void Swap(ElementType & a, ElementType & b);

    void PrintArray(ElementType A[], int N);

    // 排序算法（假设所有的排序都是从小到大）

    void SelectSort(ElementType A[], int N);

    void InsertSort(ElementType A[], int N);
}



#endif //LIBSTRUCT_SORT_H
