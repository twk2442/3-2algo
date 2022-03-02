#include <stdio.h>

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap1(int *num3, int *num4)
{
    int temp1 = *num3;
    *num3 = *num4;
    *num3 = temp1;
}
int main()
{
    int a = 2, b = 4, c = 2, d = 4;
    swap(a, b);
    printf("a: %d, b: %d", a, b);

    swap1(&c, &d);
    printf("c:%d, d:%d", c,d);
    return 0;
}

