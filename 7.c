#include<stdio.h>
int main()
{
	
	int n = 1;
	int i, m, s;

	n = 1;
	while (n != 0)
	{
		m = 0;
		s = 1;
		i = 0;
		int a[100] = { 0 };
		int b[100] = { 0 };
		scanf_s("%d", &n);
		while (n != 0 && i < n)
		{
			for (i = 0; i < n; i++)
			{
				scanf_s("%d", &a[i]);

			}
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 1)
			{
				b[m] = a[i];
				m++;
			}
		}
		for (i = 0; i < m; i++)
		{
			s = s * b[i];
		}
		
		printf("%d\n", s);
		
	}
}