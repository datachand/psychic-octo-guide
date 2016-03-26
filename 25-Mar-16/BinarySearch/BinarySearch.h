#ifndef _BINARYSEARCH_H_
#define _BINARYSEARCH_H_

/**
 *  if value is middle element
 *  if value > middle element
 *  if value < middle element
 */


#include <stdbool.h>

int BinarySearch(int * array, int size, int value);

int RecursiveBinarySearch (int * array, int value, int start, int end);

int FirstOccurence(int * array, int size, int value);

int LastOccurence(int * array, int size, int value);

int BinarySearchCount(int * array, int size, int value, bool searchFirst);

int FindRotationCount(int * array, int size);

int CircularArraySearch (int * array, int size, int value);

#endif