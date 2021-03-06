/*************************************************************************
> File Name: test.h
> Author: 
> Mail: 
> Created Time: Fri 17 Jul 2020 10:57:10 AM CST
************************************************************************/

#ifndef _TEST_H
#define _TEST_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TEST(func, a, l, r, msg) { \
    printf("\033[1;33m%s\033[0m : ", #func); \
    int *temp = (int *)malloc(sizeof(int) * (r - l + 1)); \
    memcpy(temp, a, sizeof(int) * (r - l + 1)); \
    int b = clock(); \
    func(temp, l, r); \
    int e = clock(); \
    if (check(temp, l, r)) { \
        printf(" \033[1;32mOK, %.2lf ms\033[0m ", 1000.0 * (e - b) / CLOCKS_PER_SEC); \
    } else { \
        printf(" \033[1;35mFAILED\033[0m "); \
    } \
    printf("" msg "\n");\
    free(temp); \
}

int *getData(int); 
int check(int *, int, int);
#endif
