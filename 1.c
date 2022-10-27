#include<stdio.h>
void main() {
	float a, b, c;
	printf(" please input a , b , c :\ n ");
	scanf("% f ,% f ,% f ", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
	{
		if (a == b && a == c && b == c)
		{
			printf("1");
		}
		else
		{
			if (a == b + a == c + b == c)
			{
				printf("2");
			}


			else
			{
				printf("3");
			}
		}
	}

	else
	{
		printf("0");
	}
	

}