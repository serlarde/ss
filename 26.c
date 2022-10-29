#include<stdio.h>
int main()
{
	int i = 0;
	int m, n, temp;
	printf("请输入两个正整数:");
	scanf("%d %d", &m, &n);
	if (m < n) 
	{
		temp = n;
		n = m;
		m = temp;
	}
	for (i = m; i > 0; i++)
	{
		if (i % m == 0 && i % n == 0)
		{
			printf("%d和%d的最小公倍数是%d", m, n, i);
			break;
		}
	}
	return 0;
}

