#include <stdio.h>

int solveMeFirst (int a, int b);

int main(int argc, char const *argv[])
{
	/* code */
	int num1, num2;
	int sum;

	scanf("%d %d", &num1, &num2);

	sum = solveMeFirst(num1, num2);

	printf("%d\n", sum);

	return 0;
}

int solveMeFirst (int a, int b) {
	return a + b;
}