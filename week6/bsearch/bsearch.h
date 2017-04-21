#ifndef __BSEARCH_H__
#define __BSEARCH_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define len 100
extern void qsort_t(int *arr, int left, int right);
extern int partion(int *arr, int left, int right);
extern void quickSort1(int* root,int low,int high);
extern void bseach_t(int value, int *array, int left, int right);




#endif



