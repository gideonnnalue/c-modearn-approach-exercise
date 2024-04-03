#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "inventory.h"

/****************************************************************
 *  quicksort:  Sorts an array by calling the split function    *
 *              using the beginning and end or array getting    *
 *              the middle and dividing the array in half,     *
 *              calling itself recursively until sorting is     *
 *              completed.                                      *
 ****************************************************************/
void quicksort(struct part a[], int low, int high);

/****************************************************************
 *  split:  Sorts an array by moving lower numbers to left and  *
 *          higher numbers to right, and returning the middle   *
 *          of the sorted array                                 *
 ****************************************************************/
int split(struct part a[], int low, int high);

#endif