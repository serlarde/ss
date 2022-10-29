#include<stdio.h>

int main()
{
    int  n,t;
    t = 0;
    scanf_s("%d", &n);
    while (n!= 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else n = (3*n + 1) / 2;

        t++;
    }

    printf("%d", t);
    return 0;
}
