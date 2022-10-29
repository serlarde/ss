#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int GetPlace(int n);
int main()
{
	int i, total, p;
	char c;
	c = getchar();
	i = 0;
	total = 0;
	while (c != '\n' && c != '\0')
	{
		switch (c)
		{
		case '1':
			total += 1;
			break;
		case '2':
			total += 2;
			break;
		case '3':
			total += 3;
			break;
		case '4':
			total += 4;
			break;
		case '5':
			total += 5;
			break;
		case '6':
			total += 6;
			break;
		case '7':
			total += 7;
			break;
		case '8':
			total += 8;
			break;
		case '9':
			total += 9;
			break;
		case '0':
			total += 0;
			break;
		}
		i++;
		c = getchar();
	}
	char s[100];
	sprintf(s, "%d", total);   //将最终数值转换成字符串

	i = 0;
	p = GetPlace(total);

	while (s[i] != '\0')
	{
		switch (s[i])
		{
		case '1':
			printf("yi");
			break;
		case '2':
			printf("er");
			break;
		case '3':
			printf("san");
			break;
		case '4':
			printf("si");
			break;
		case '5':
			printf("wu");
			break;
		case '6':
			printf("liu");
			break;
		case '7':
			printf("qi");
			break;
		case '8':
			printf("ba");
			break;
		case '9':
			printf("jiu");
			break;
		case '0':
			printf("ling");
			break;
		}
		if (i < p - 1)
		{
			printf(" ");
		}
		else
		{
			break;
		}
		i++;
	}
	return 0;
}
int GetPlace(int n)
{
	int t = 1;
	int place = 1;
	while ((n / t) >= 10)
	{
		t *= 10;
		place++;
	}
	return (place);
}

