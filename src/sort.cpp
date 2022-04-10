//
// Created by libin on 2022/4/9.
//
#include <cstdio>
#include "sort.h"

namespace sort {
    void WriteLine(int length)
    {
        for(int i=0; i<length; ++i)
            printf("-");
        printf("\n");
    }

    void Swap(ElementType &a, ElementType &b) {
        ElementType tmp = a;
        a = b;
        b = tmp;
    }

    void PrintArray(ElementType A[], int N){
        for (int i=0; i<N; ++i)
        {
            printf("%d", A[i]);
            if (i!=N-1)
                printf(" -> ");
        }
        printf("\n");
    }


    // 排序算法

    void SelectSort(ElementType A[], int N, bool debug) {
        int i, j;
        int min;    // 最小值索引
        // 外层循环，仅需要N-1趟
        for (i = 0; i < N - 1; ++i) {
            min = i;    // 初始化最小值索引（认为每趟的A[i]为最小值

            // 内层循环，从i+1开始至结束
            for (j = i + 1; j < N; ++j) {
                if (A[j] < A[min])
                    min = j;
            }
            // 内层循环结束后，才交换
            Swap(A[i], A[min]);

            if (debug)
            {
                printf("[%d]\n", i);
                PrintArray(A, N);
            }
        }
    }


    void InsertSort(ElementType A[], int N, bool debug){
        int j;
        ElementType tmp;
        // 外循环N-1趟，从1到N-1
        for (int i=1; i<N; ++i){
            if (debug)
                printf("[%d]\n", i);

            tmp = A[i];     // 未排序序列第一个元素（待处理）

            // 内循环
            for (j=i-1; j>=0 && tmp<A[j]; --j)
            {
                A[j+1]=A[j];
                if (debug)
                {
                    PrintArray(A, N);
                }
            }

            // 情况1: j=-1, tmp比所有已排序序列都小，理应插在A[0]
            // 情况2: tmp>=A[j], 应该查到A[j+1]
            A[j+1] = tmp;

            if (debug)
                PrintArray(A, N);
        }
    }


}   // namespace sort

