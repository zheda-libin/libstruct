//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include <cstring>
#include "sort.h"
using namespace sort;

#define LENGTH 9
//#define DEBUG


int main(int argc, char *argv[])
{

    int A[LENGTH] = {4, 7, 6, 5, 3, 2, 8, 4,1};
    int Ref[LENGTH] = {4, 7, 6, 5, 3, 2, 8, 4, 1};


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
    memcpy(A, Ref, LENGTH*sizeof(ElementType));
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
    memcpy(A, Ref, LENGTH*sizeof(ElementType));
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
    memcpy(A, Ref, LENGTH*sizeof(ElementType));
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
    memcpy(A, Ref, LENGTH*sizeof(ElementType));
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


    return 0;
}
