
#include<stdio.h>
void main() {
    int num1, num2,a;
    printf(" please input  num1 ,  num2 \n ");
    scanf_s("%d,%d", &num1, &num2);

    if (num1 < num2)
    {
        a = num1;
        num1 = num2;
        num2 = a;
    }


    while (num2 != 0)
    {
        a = num1 % num2;
        num1 = num2;
        num2 = a;
    }
    printf("最大公约数%d", num1);

    
}