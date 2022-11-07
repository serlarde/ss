#include<stdio.h>
void main() {
	int n,i;
	int a, b, c, d,s1,s2;
	s1 = 0, s2 = 0,a=0,b=0,c=0,d=0;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		scanf_s("%d", &d);
		if (b == a + c && d != a + c)
		{
			s2 += 1;
		}
		else if (b != a + c && d == a + c)
		{
			s1 += 1;
		}
	}
	printf("%d %d", s1, s2);
}