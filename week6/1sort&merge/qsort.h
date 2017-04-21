#ifndef __QSORT_H__
#define __QSORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define len 1024
extern void qsort_t(int *arr, int left, int right);
extern int partion(int *arr, int left, int right);
extern void quickSort1(int* root,int low,int high);
extern void merger_sort(int *arr, int* dst, int left, int right);
extern void merge(int *arr, int* dst, int left, int mid_index, int right);
extern void merge_sort(int *arr, int left, int right);
extern void merge1(int *arr,  int left, int mid_index, int right);




#endif
