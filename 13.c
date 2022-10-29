#include<stdio.h>

int main()
{
	int n,m;
	int  a, b, c;
	m = 1;
	scanf_s("%d", &n);
	while (n!=0) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		n--;
		if (a + b > c) {
			printf("Case #%d: false", m);
		}
		else {
			printf("Case #%d: true", m);
		}
	}
}