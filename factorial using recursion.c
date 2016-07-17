//Write a C program to find the factorial of any given number using recursion

# include <stdio.h>

long int fact(int);

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	printf("The factorial of %d is %ld.",n,fact(n));
	return 0;
}

long int fact(int n)
{
	if (n == 0)
    return 1;
  else
    return(n * fact(n-1));
}
