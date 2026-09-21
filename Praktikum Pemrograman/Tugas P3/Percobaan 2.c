#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = -5;

    printf("(a > 0) && (b > 0) = %d\n", (a > 0) && (b > 0));
    printf("(a > 0) && (b < 0) = %d\n", (a > 0) && (b < 0));
    printf("(a > 0) || (b < 0) = %d\n", (a > 0) || (b < 0));
    printf("!(a > 0) = %d\n", !(a > 0));

    return 0;
}
