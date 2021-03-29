#include <stdio.h>
int outer_a = 7;
int b = 1;

void swapInt(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a = outer_a;
    int b = 100 + 200 / 10 - 3 * 10;
    printf("Before: %d %d\n", a, b);
    swapInt(&a, &b);
    printf("After : %d %d\n", a, b);
    return 0;
}