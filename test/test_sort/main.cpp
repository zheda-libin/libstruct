//
// Created by libin on 2022/4/1.
//
#include <cstdio>
#include <cstring>
#include "sort.h"
using namespace sort;


int main(int argc, char *argv[])
{
    printf("Original Array:\n");
    int A[7] = {7, 6, 3, 4, 2, 5, 1};
    int Ref[7] = {7, 6, 3, 4, 2, 5, 1};
    int len = 7;
    PrintArray(A, len);

    // 1. SelectSort
    printf("\nSelectSort Array:\n");
    SelectSort(A, len);
    PrintArray(A, len);

    // 2. InsertSort
    printf("\nInsertSort Array:\n");
    memcpy(A, Ref, len*sizeof(ElementType));
    InsertSort(A, len);
    PrintArray(A, len);


    return 0;
}
