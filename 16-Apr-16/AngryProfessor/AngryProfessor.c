#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	if (testcase >= 1 && testcase <= 10) {
		int * outcome = (int *) malloc (testcase * sizeof(int));

		for (int i = 0; i < testcase; i++) {
			int n, k;
			scanf("%d %d", &n, &k);

			if (n >= 1 && n <= 1000 && k >= 1 && k <= n) {
				int * array = (int *) malloc(n * sizeof(int));

				for (int j = 0; j < n; j++) {
					scanf("%d", &array[j]);
				}


				int negativeThreshold = 0;
				for (int j = 0; j < n; j++) {
					if (array[j] <= 0) {
						negativeThreshold++;
					}
				}

				if (negativeThreshold < k) {
					outcome[i] = 1;
				} else {
					outcome[i] = 0;
				}

			}
		}

		for (int i = 0; i < testcase; i++) { 
			if (outcome[i] == 1) printf("YES\n");
			else printf("NO\n");
		}
	}

	return 0;
}