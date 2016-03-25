#ifndef _BINARYSEARCH_H_
#define _BINARYSEARCH_H_

/**
 *  if value is middle element
 *  if value > middle element
 *  if value < middle element
 */

int BinarySearch(int * array, int size, int value);

int RecursiveBinarySearch (int * array, int value, int start, int end);

#endif