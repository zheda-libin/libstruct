//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include <cstring>
#include "sort.h"
using namespace sort;

#define LENGTH 7
//#define DEBUG


int main(int argc, char *argv[])
{

    int A[LENGTH] = {7, 6, 3, 4, 2, 5, 1};
    int Ref[LENGTH] = {7, 6, 3, 4, 2, 5, 1};


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


    return 0;
}
