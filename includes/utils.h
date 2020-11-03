#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#define MAXBUFF 1024

// swaps integer values.
void swap(int*, int*);

// show array of integers. 
void show_array(int *a, int n);

// bubble sort.
void bubble(int*, int);

// merge subarrays of integers 
void merge(int*, int*, int*, int, int);

// sorts array of integers using mergesort
void mergesort(int*, int);

// sort words
void sort_words(char**, int);

// show a list of words
void show_words(char**, int);

#endif

