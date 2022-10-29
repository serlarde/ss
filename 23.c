#include<stdio.h>
int main()
{
	int i = 0, n = 0;
	scanf_s("%d", &n);
	int a[10] = { 0 };
	int b[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int e = 1;
	for (i = 0; i < 10; i++)
	{
		a[i] = n / e - n / (10 * e) * 10;
		e = e * 10;
	}
	
	for (i = 0; i < 10; i++) {
		switch (a[i])
		{
		case 1:b[1] = b[1] +1;
		case 2: b[2] = b[2]+ 1;
		case 3: b[3] = b[3]+ 1;
		case 4: b[4] = b[4]+1;
		case 5: b[5] = b[5]+1;
		case 6: b[6] = b[6] +1;
		case 7: b[7] = b[7] +1;
		case 8:b[8] = b[8]+1;
		case 9: b[9]= b[9]+ 1;
		case 0: b[0] = b[0]+1;

		}
	}
	for (i = 0; i < 10; i++) {
		printf("%dΪ%d\n",i, b[i]);
	}
}