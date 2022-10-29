#include<stdio.h>
int op(int x); 
{
    int n, a[10000], num = 0, b[10000];
    scanf("%d", &n);
    for (int z = 0; z < n; z++)  scanf("%d", &a[z]);

    for (int z = 0; z < n; z++)
    {
        int flag = 0;
        for (int z1 = 0; z1 < num; z1++)  
        {
            if (b[z1] == op(a[z]))  flag = 1;
        }
        if (flag == 0) b[num++] = op(a[z]);
    }

    printf("%d\n", num);
    for (int z = 0; z < num; z++) {
        
        for (int z1 = z + 1; z1 < num; z1++) if (b[min] > b[z1]) min = z1;
        if (min != z) b[min] ^= b[z] ^= b[min] ^= b[z]; 

        printf("%d", b[z]);
        if (z < num - 1) putchar(' ');
        {
        
    
    return 0;
}
int op(int x)
{
    int sum = 0;
    do {
        sum += x % 10;
        x /= 10;
    } while (x);
    return sum;
}