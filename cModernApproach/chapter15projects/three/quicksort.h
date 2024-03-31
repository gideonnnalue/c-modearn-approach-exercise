#ifndef QUICKSORT_H
#define QUICKSORT_H

/****************************************************************
 *  quicksort:  Sorts an array by calling the split function    *
 *              using the beginning and end or array getting    *
 *              the middle and dividing the array in half,     *
 *              calling itself recursively until sorting is     *
 *              completed.                                      *
 ****************************************************************/
void quicksort(int a[], int low, int high);

/****************************************************************
 *  split:  Sorts an array by moving lower numbers to left and  *
 *          higher numbers to right, and returning the middle   *
 *          of the sorted array                                 *
 ****************************************************************/
int split(int a[], int low, int high);

#endif