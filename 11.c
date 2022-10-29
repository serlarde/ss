#include<stdio.h>
int main()
{
	int n = 1, m = 1;
	while (n != 0 && m != 0)
	{
		int a[10000] = { 0 };
		int i, t, j;
		i = 0, t = 0, j = 0;
		scanf_s("%d", &n);
		scanf_s("%d", &m);
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
		if (n > m)
		{
			for (i = 0; i < m; i++)
			{
				printf("%d", a[i]);
			}
		}
		else {
			for (i = 0; i < n; i++)
			{
				printf("%d ", a[i]);
			}
		}
	}
}