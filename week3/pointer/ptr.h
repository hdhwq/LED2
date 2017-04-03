#ifndef __POINTER2_H__
#define __POINTER2_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 9

extern void pointer_ring();
extern int pointer_test1();
extern void pointer_test2();
extern void pointer_test3();
extern void pointer_test4();
extern void pointer_test5();

extern void mystrcpy(char *dst, char *src);
extern void mystrcat(char str1[], char str2[]);
extern int mystrlen(char *str);
extern int mystrcmp(char *str1, char *str2);

#endif
