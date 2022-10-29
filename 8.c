#include<stdio.h>
int main()
{

	int n = 1;


	while (n != 0)
	{
		int a[100] = { 0 };
		int i, j;
		int t = 0, s = 0;
		i = 0;
		scanf_s("%d", &n);
			for (i = 0; i < n; i++)
			{
				scanf_s("%d", &a[i]);

			}
	

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				if ((a[j] * a[j]) < (a[j + 1] * a[j + 1]))
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}
		a[n - 1] = 0;
		a[0] = a[n - 1];
		for (i = 0; i < n; i++)
		{
			s = s + a[i];
		}
		s = s / (n - 2);
		double d = s;
		printf("%.2f\n", d);

	}
}