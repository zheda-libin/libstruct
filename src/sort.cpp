//
// Created by libin on 2022/4/9.
//
#include <cstdio>
#include <cstdlib>
#include "sort.h"

namespace sort {
    // 工具函数
    void WriteLine(int length) {
        for (int i = 0; i < length; ++i)
            printf("-");
        printf("\n");
    }

    void Swap(ElementType &a, ElementType &b) {
        ElementType tmp = a;
        a = b;
        b = tmp;
    }

    void PrintArray(ElementType A[], int N) {
        for (int i = 0; i < N; ++i) {
            printf("%2d", A[i]);
            if (i != N - 1)
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
            if (debug)
                printf("[%d]\n", i);

            min = i;    // 初始化最小值索引（认为每趟的A[i]为最小值

            // 内层循环，从i+1开始至结束
            for (j = i + 1; j < N; ++j) {
                if (A[j] < A[min])
                    min = j;
            }
            // 内层循环结束后，才交换
            Swap(A[i], A[min]);

            if (debug)
                PrintArray(A, N);
        }
    }


    void InsertSort(ElementType A[], int N, bool debug) {
        int j;
        ElementType tmp;
        // 外循环N-1趟，从1到N-1
        for (int i = 1; i < N; ++i) {
            if (debug)
                printf("[%d]\n", i - 1);

            tmp = A[i];     // 未排序序列第一个元素（待处理）

            // 内循环
            for (j = i - 1; j >= 0 && tmp < A[j]; --j) {
                A[j + 1] = A[j];
                if (debug) {
                    PrintArray(A, N);
                }
            }

            // 情况1: j=-1, tmp比所有已排序序列都小，理应插在A[0]
            // 情况2: tmp>=A[j], 应该查到A[j+1]
            A[j + 1] = tmp;

            if (debug)
                PrintArray(A, N);
        }
    }


    void BubbleSort(ElementType A[], int N, bool debug) {
        bool flag;
        int i, P;
        // 外层循环，右范围
        for (P = N - 1; P > 0; --P) {
            if (debug)
                printf("[%d]\n", N - 1 - P);

            flag = true;
            // 内层循环，[0, P-1], 实际处理范围，[0, P]
            for (i = 0; i < P; ++i) {
                if (A[i] > A[i + 1]) {
                    Swap(A[i], A[i + 1]);
                    flag = false;
                }
            }
            if (flag)
                break;

            if (debug)
                PrintArray(A, N);
        }
    }


    void QuickSort_v1(ElementType A[], int N, bool debug) {
        QuickEngine_v1(A, 0, N - 1, N, debug);
    }

    // 第一版，严蔚敏版本，交替双指针
    void QuickEngine_v1(ElementType A[], int Left, int Right, int N, bool debug) {
        if (Left < Right)   // 先决条件是，待处理序列至少是2个数，才有处理的价值
        {
            // 选主元
            ElementType pivot = A[Left];
            int low = Left, high = Right;
            if (debug) {
                printf("\nPivot: A[%d]=%d   Left: %d   Right: %d\n", low, A[low], Left, Right);
                printf("Original:                ");
                PrintArray(A, N);
            }

            // 交替指针，一定会出现low == high的情况
            while (low < high) {
                // 右指针起手，卡住就换左指针
                while (low < high && A[high] >= pivot)
                    --high;
                A[low] = A[high];
                if (debug) {
                    printf("[low=%d,  high=%d, RIGHT]  ", low, high);
                    PrintArray(A, N);
                }


                // 左指针接力
                while (low < high && A[low] <= pivot)
                    ++low;
                A[high] = A[low];
                if (debug) {
                    printf("[low=%d,  high=%d, LEFT ]  ", low, high);
                    PrintArray(A, N);
                }

            }
            A[low] = pivot;
            if (debug) {
                printf("[low=%d,  high=%d, END  ]  ", low, high);
                PrintArray(A, N);
            }

            // 递归
            QuickEngine_v1(A, Left, low - 1, N, debug);
            QuickEngine_v1(A, low + 1, Right, N, debug);
        }
    }


    void QuickSort_v2(ElementType A[], int N, bool debug) {
        QuickEngine_v2(A, 0, N - 1, N, debug);
    }

    void QuickEngine_v2(ElementType A[], int Left, int Right, int N, bool debug) {
        // Left == Right ==> 待排序序列只有一个数，没得玩
        if (Left < Right) {
            // 选主元
            ElementType pivot = A[Left];
            int low = Left + 1, high = Right;
            if (debug) {
                printf("\nPivot: A[%d]=%d   Left: %d   Right: %d\n", Left, pivot, Left, Right);
                printf("Original:                ");
                PrintArray(A, N);
            }

            // 两个指针都要移动，所以两种情况low == high, low > high
            while (1) {
                // 典型的双指针打法
                while (A[low] < pivot)       // 左指针起手，等于可停可不停
                    ++low;
                while (A[high] > pivot)      // 右指针接力
                    --high;

                // low == high说明还剩一个数没check，还不能跳出
                if (low < high) {
                    Swap(A[low], A[high]);      // 似乎Swap(A[low++], A[high--])也对，但没必要
                    if (debug) {
                        printf("[low=%d,  high=%d, SWAP ]  ", low, high);
                        PrintArray(A, N);
                    }
                } else
                    break;
            }
            Swap(A[Left], A[high]);
            if (debug) {
                printf("[low=%d,  high=%d, END  ]  ", low, high);
                PrintArray(A, N);
            }

            // 递归
            QuickEngine_v2(A, Left, high - 1, N, debug);
            QuickEngine_v2(A, high + 1, Right, N, debug);
        }
    }


    void MergeSort(ElementType A[], int N, bool debug)
    {
        ElementType * TmpA = (ElementType *)malloc(N * sizeof(ElementType));
        MSort(A, TmpA, N, 0, N-1, debug);
        free(TmpA);
    }

    void MSort(ElementType A[], ElementType TmpA[], int N, int L, int RightEnd, bool debug)
    {
        if (L < RightEnd)
        {
            int Center = (L+RightEnd)/2;
            MSort(A, TmpA, N, L, Center, debug);
            MSort(A, TmpA, N, Center+1, RightEnd, debug);
            Merge(A, TmpA, L, Center+1, RightEnd);

            if (debug) {
                printf("[Left: %d  Right: %d]  ", L, RightEnd);
                PrintArray(A, N);
            }
        }
    }

    void Merge(ElementType A[], ElementType TmpA[], int L, int R, int RightEnd)
    {
        // 将有序的A[L]~A[R-1], A[R]~A[RightEnd]归并为有序序列
        int cur = L;
        int LeftEnd = R-1;
        int NumElem = RightEnd - L + 1;

        while(L<=LeftEnd && R<=RightEnd)
        {
            if (A[L] <= A[R])
                TmpA[cur++] = A[L++];
            else
                TmpA[cur++] = A[R++];
        }

        while (L <= LeftEnd)
            TmpA[cur++] = A[L++];
        while (R <= RightEnd)
            TmpA[cur++] = A[R++];

        for(int i=0; i<NumElem; ++i)
            A[RightEnd-i] = TmpA[RightEnd-i];
    }

}   // namespace sort

