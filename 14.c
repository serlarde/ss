#include<stdio.h>
void main()
{
	int n = 1, t = 0,j=0;
	while (n != 0)
	{
		int i;
		int a[10000] = { 0 };
		int b[10000] = { 0 };
		scanf_s("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf_s("%d", &a[i]);
			b[i] = a[i];
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
		t = b[0];
		b[0] = a[n - 1];
		b[n - 1] = t;
		for (i = 0; i < n; i++)
		{
			printf("%d ", b[i]);
		}
	}
}