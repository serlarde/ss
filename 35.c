#include<stdio.h>
int main()
{
	int n, m, i, j, t, c;
	
	c = 0;
	float a[100] = { 0 };
	float b[100] = { 0 };
	scanf_s("%d", &n);
	while (c < n)
	{
		t = 0; 
		scanf_s("%d", &m);
		for (i = 0; i < m; i++)
		{
			scanf_s("%f", &a[i]);
		}


		for (i = 0; i < m; i++)
		{
			for (j = 0; j < (m - 1); j++)
			{
				if ((a[j] * a[j]) < (a[j + 1] * a[j + 1]))
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}

		b[c] = a[0];
		c++;

	}
	for (i = 0; i < n; i++)
	{
		printf("%.2f\n", b[i]);
	}
}
