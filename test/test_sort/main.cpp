//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include <cstring>
#include "sort.h"

using namespace sort;

#define LENGTH 10
#define DEBUG


int main(int argc, char *argv[]) {

    int A[LENGTH] = {32, 54, 37, 12, 7, 84, 14, 78, 23, 45};
    int Ref[LENGTH] = {32, 54, 37, 12, 7, 84, 14, 78, 23, 45};




    // 1. SelectSort
    printf("\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("SelectSort Array:\n");
#ifdef DEBUG
    SelectSort(A, LENGTH, true);
#else
    SelectSort(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);




    // 2. InsertSort
    memcpy(A, Ref, LENGTH * sizeof(ElementType));
    printf("\n\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("InsertSort Array:\n");
#ifdef DEBUG
    InsertSort(A, LENGTH, true);
#else
    InsertSort(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);




    // 3. BubbleSort
    memcpy(A, Ref, LENGTH * sizeof(ElementType));
    printf("\n\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("BubbleSort Array:\n");
#ifdef DEBUG
    BubbleSort(A, LENGTH, true);
#else
    BubbleSort(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);




    // 4.1. QuickSort v1
    memcpy(A, Ref, LENGTH * sizeof(ElementType));
    printf("\n\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("QuickSort v1 Array:\n");
#ifdef DEBUG
    QuickSort_v1(A, LENGTH, true);
#else
    QuickSort_v1(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);



    // 4.2. QuickSort v2
    memcpy(A, Ref, LENGTH * sizeof(ElementType));
    printf("\n\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("QuickSort v2 Array:\n");
#ifdef DEBUG
    QuickSort_v2(A, LENGTH, true);
#else
    QuickSort_v2(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);




    // 5. MergeSort
    memcpy(A, Ref, LENGTH * sizeof(ElementType));
    printf("\n\n\nOriginal Array:\n");
    PrintArray(A, LENGTH);

    // ==============================================
    printf("MergeSort Array:\n");
#ifdef DEBUG
    MergeSort(A, LENGTH, true);
#else
    MergeSort(A, LENGTH);
#endif

    // ==============================================
    WriteLine();
    PrintArray(A, LENGTH);

    return 0;
}
