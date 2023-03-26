// Fibonacci Series using Recursion
#include <stdio.h>

int fib1(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

// Fibonacci Series using Dynamic Programming
int fib(int n)
{
	/* Declare an array to store Fibonacci numbers. */
	int f[n + 1];
	int i;

}


int main()
{
	int n = 9;
	printf("%d", fib1(n));
	getchar();
	return 0;
}


