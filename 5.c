#include <stdio.h>
void main(){
	int x,b,i,n;
	b = 0;
	for (x = 2; x <= 100; x++)
	{
		n = 1;
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
		{
			
			printf("%d ", x);
			b++;
			if (b % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	
}
