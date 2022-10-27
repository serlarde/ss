#include<stdio.h>
void main() {
	int a = 5;
	int b, i,n;
	for (n = 0; n<2; n++)
	{
		if (a > 2)

		{
			b = 0;
			for (; b <= 2; b++,a--)
			{
				for (i = 0; i < b; i++)
				{
					printf(" ");
				}
				for (i = 0; i < 5 - 2 * b; i++)
				{
					printf("*");
				}
				printf("\n");


			}
		}
		else
		{
			b = 1;
			for (; b >= 0; b--)
			{

				for (i = 0; i < b; i++)
				{
					printf(" ");
				}
				for (i = 0; i < 5 - 2 * b; i++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
	}
}