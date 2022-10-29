#include<stdio.h>
void main()
{
	int n = 1, i = 0;
	int a[10000] = { 0 };
	char s;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		s = a[i];
		printf("%c", s);
	}
}
