#pragma once
#include<stdio.h>
#include<string.h>

#define MAX 10
typedef struct seqlist SL;
typedef int datatype;

struct seqlist {
	datatype a[MAX];
	int size;
};

//实现增删补等函数


void 
