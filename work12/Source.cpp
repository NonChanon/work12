#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("buzz\n");
		}
		else
			printf("%d\n", i);
	}
	return 0;
}