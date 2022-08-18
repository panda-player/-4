#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	int i = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		for (i = b + 1; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				break;
			}
		}
	}
	else
	{
		for (i = a + 1; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				break;
			}
		}
		return 0;

	}
}



		
