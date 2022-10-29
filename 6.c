#include<stdio.h>
	int main()
	{
		
		int n=1;
		int i, j,m;
		int t=0;
		i = 0;
		
		while (n != 0)
		{
			int a[100] = { 0 };
			scanf_s("%d", &n);
		while ( n != 0&&i<n)
		{
			for (i = 0; i < n; i++)
			{
				scanf_s("%d", &a[i]);

			}
		}
		
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < (n-1); j++)
				{
					if ((a[j]* a[j]) < (a[j + 1]* a[j + 1]))
					{
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
				}
			}
			for (m = 0;m < n; m++)
			{
				printf("%d", a[m]);
			}
			printf("\n");
			
		}
		return 0;
	}