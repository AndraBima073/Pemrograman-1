#include <stdio.h>

int main() {
    int a, b, c, d;
    double e, f, g, h;

    a=75, b=259, c=3315, d=12345;
    e=75.07, f=259.055, g=3315.3310, h=12345.67890;

    printf("a=%7d\nb=%7d\nc=%7d\nd=%7d\n\n", a, b, c, d);
    printf("e=%7.5f\nf=%7.5f\ng=%7.5f\nh=%7.5f\n", e, f, g, h);
    return 0;
}