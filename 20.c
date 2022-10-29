#include<stdio.h>
int main()
{
	int i = 0, n = 0;
	double d = 0.0;
	double a[10000] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		double s = 0.0;
		s = i;
		if (i / 2 == 0)
		{
			
			d = 1 / (s + 1);
			a[i] = d;
			
		}
		else {
			d = -1 / (s + 1);
			a[i] = d;
		}
	}
	for (i = 0; i < n; i++)
	{
		d = d + a[i];
	}
	printf("%.2f", d);
}