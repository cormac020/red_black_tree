/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Jul 2020 09:31:36 AM CST
 ************************************************************************/

#include "quick_sort.h"
#include "test.h"

#define MAX_N 10000000

int main(){
    int *arr = getData(MAX_N);
    TEST(quick_sort_v1, arr, 0, MAX_N - 1, "normal");
    TEST(quick_sort_v2, arr, 0, MAX_N - 1, "single side recursive");
    TEST(quick_sort_v3, arr, 0, MAX_N - 1, "unguarded partition");
    TEST(quick_sort_v4, arr, 0, MAX_N - 1, "random radix value select");
    TEST(quick_sort_v5, arr, 0, MAX_N - 1, "three point radix value select");
    return 0;
}
