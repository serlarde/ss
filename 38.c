#include<stdio.h>
int main()
{
	int n, m, i, j, t, s;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	s = 0;
	int a[100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };//zongfen
	for (i = 0; i < m; i++)
	{
		scanf_s("%d", &a[i]);
	}//fenshu
	for (i = 0; i < m; i++)
	{
		scanf_s("%d", &b[i]);
	}//daan
	for (i = 0; i < n; i++) {
		s = 0;
		for (j = 0; j < m; j++)
		{
			scanf_s("%d", &t);
			if (t == b[j])
			{
				s = s + a[j];
			}
		}
		c[i] = s;
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", c[i]);
	}
}