#include<stdio.h>
void main() {
	float a, b;
	printf(" please input ³É¼¨ :\ n ");
	scanf("% f ,% f  ", &a, &b);
	if (b <= 100 && a <= 100 && b >= 0 && a >= 0)

	{
		if (a > 60 && b > 60)
		{
			printf("it is pass");
		}
		else

		{
			printf("it is not pass");
		}
	}
	else
	{
	printf("it is error");
	}
}