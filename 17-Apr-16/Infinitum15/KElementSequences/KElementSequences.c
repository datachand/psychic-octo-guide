#include <stdio.h>
#include <stdlib.h>

int KElementSequence (int sum, int size);

int main(int argc, char const *argv[])
{
	int testcase;
	scanf("%d", &testcase);

	int * n = (int *) malloc(testcase * sizeof(int));
	int * k = (int *) malloc(testcase * sizeof(int));

	for (int i = 0; i < testcase; i++) {
		scanf("%d %d", &n[i], &k[i]);
	}

	for (int i = 0; i < testcase; i++) {
		printf("%d\n", KElementSequence(n[i], k[i]));
	}

	return 0;
}


int KElementSequence (int sum, int size) {
	
	return 0;
}