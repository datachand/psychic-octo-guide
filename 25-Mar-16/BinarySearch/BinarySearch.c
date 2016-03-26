#include "BinarySearch.h"

int BinarySearch (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;

	while (start <= end) {
		mid = start + (end-start)/2; // (start + end) / 2; since 32-bit signed integer can store maximum of 2^31, if both low and high are pretty high then (high+low) exceeds 2^31 and may overflow
		if (value == array[mid]) {
			return mid;
		} else if (value < array[mid]) {
			end = mid - 1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}
	}
	return -1;
}

int RecursiveBinarySearch (int * array, int value, int start, int end) {

	if (start > end) return -1;

	int mid = (start + end) / 2;
	
	if (value == array[mid]) {
		return mid;
	} else if (value < array[mid]) {
		return RecursiveBinarySearch(array, value, start, mid - 1);
	} else if (value > array[mid]) {
		return RecursiveBinarySearch(array, value, mid + 1, end);			
	}
}

int FirstOccurence (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end - start)/2;

		if (value == array[mid]) {
			result = mid;
			end = mid-1;
		} else if (value < array[mid]) {
			end = mid-1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}

	}
	return result;
}


int LastOccurence (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end - start)/2;

		if (value == array[mid]) {
			result = mid;
			start = mid+1;
		} else if (value < array[mid]) {
			end = mid-1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}

	}
	return result;
}

int BinarySearchCount(int * array, int size, int value, bool searchFirst) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end - start)/2;

		if (value == array[mid]) {
			result = mid;
			if(searchFirst) end = mid-1;
			else start = mid+1;
		} else if (value < array[mid]) {
			end = mid-1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}

	}
	return result;
} 

int FindRotationCount (int * array, int size) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		if (array[start] <= array[end]) return array[start];
		mid = start + (end-start)/2;
		int next = (mid+1) % size;
		int prev = (mid+size-1) % size;

		if (array[mid] <= array[next] && array[mid] <= array[prev]) return mid;
		else if (array[mid] <= array[end]) end = start - 1;
		else if (array[mid] >= array[start]) start = end + 1;
	}
	return -1;
}


int CircularArraySearch (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end-start) / 2;

		if (value == array[mid]) return mid;
		else if (array[mid] <= array[end]) {
			if (value > array[mid] && value <= array[end]) {
				start  = mid + 1;
			} else {
				end = mid - 1;
			}
		}
		else if (array[start] <= array[mid]) {
			if (value >= array[start] && value < array[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
	}

	return -1;

}