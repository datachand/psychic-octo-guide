#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define TEMP_MAX_SIZE 10

int PrimePairConnection (int *, int *, int);

int LastDigitAsLeftDivisibleByRight (int, int);

bool LastDigitCompare (int value, int sample);

int * GeneratePrimeNumbers (int start, int end, int * returnsize);

int nextPrime (int number);

bool isPrime (int number);

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	

	int * num1 = (int *) malloc (testcase * sizeof(int));
	int * num2 = (int *) malloc (testcase * sizeof(int));
	if (testcase >= 1 && testcase <= 10) {
		for (int i = 0; i < testcase; i++) {
			scanf("%d %d", &num1[i], &num2[i]);
		}

		printf("%d", PrimePairConnection(num1, num2, testcase));
	}
	return 0;
}


int PrimePairConnection (int * p1, int * p2, int n) {
	int primePairSum = 0;
	
	for (int i = 0; i < n; i++) {
		if (p1[i] >= 5 && p1[i] <= pow(10, 9) && (p2[i] > p1[i])) {
			int * tempPrimeArray = (int *) malloc (TEMP_MAX_SIZE * sizeof(int));
			int primeArraySize;
			tempPrimeArray = GeneratePrimeNumbers(p1[i], p2[i], &primeArraySize);
			int * primeArray = realloc(tempPrimeArray, primeArraySize * sizeof(int));

			for (int k = 0; k < primeArraySize-1; ++k)
			{
				if (primeArray[k] >= p1[i] && p1[i] <= primeArray[k+1] && ((primeArray[k+1] - primeArray[k]) <= pow(10, 6))) {
					primePairSum += LastDigitAsLeftDivisibleByRight(primeArray[k], primeArray[k+1]);
				}
			}
		}
	}
	return primePairSum;
}


int LastDigitAsLeftDivisibleByRight (int left, int right) {

	int basic = right;

	while (!LastDigitCompare(basic, left)) {
		basic += right;
	}

	return basic;
}

bool LastDigitCompare (int value, int sample) {
	int nsample = sample;
	int ncount = 0;
	int * nsamplearray = (int *) malloc (TEMP_MAX_SIZE * sizeof(int));

	while (nsample > 0) {
		int output = nsample%10;
		nsamplearray[ncount] = output;
		nsample = nsample/10;
		ncount++;
	}

	int * comparesample =  realloc(nsamplearray, ncount * sizeof(int));

	int nvalue = value;
	int truthcount = 0;

	for (int i = 0; i < ncount; i++) {
		int output = nvalue%10;

		if (output == comparesample[i]) {
			truthcount++;
		}

		nvalue = nvalue/10;
	}

	if (truthcount == ncount)
		return true;

	return false;
}

int * GeneratePrimeNumbers (int start, int end, int * returnsize) {
	int size = 0;

	int * temp = (int *) malloc (TEMP_MAX_SIZE * sizeof(int));

	if (start > end) {
		return 0;
	}

	while (start <= end) {
		temp[size] = start;
		start = nextPrime(start);
		size++;
	}

	temp[size] = nextPrime(temp[size-1]);
	size++;

	* returnsize = size;
	int * returndata = realloc(temp, size * sizeof(int));

	return returndata;
}

int nextPrime (int number) {
	int next = 0;
	number = number+1;
	while (!isPrime(number)) {
		number++;
		next = number;
	}

	return next;
}

bool isPrime (int number) {
	if (number <= 1) return false;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number%i == 0) {
			return false;
		}
	}
	return true;
}