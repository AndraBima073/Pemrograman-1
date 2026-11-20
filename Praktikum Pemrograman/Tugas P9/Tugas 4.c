#include <stdio.h>

int main(void)
{
    int x = 25;
    int *p = &x;
    int **pp = &p;

    printf("%-6s | %-12s | %-18s | %s\n", "Nama", "Nilai", "Isi (alamat)", "Alamat dirinya");
    printf("-------+--------------+--------------------+-------------------\n");
    printf("%-6s | %-12d | %-18s | %p\n", "x",   x,   "-",           (void *)&x);
    printf("%-6s | %-12d | %-18p | %p\n", "*p",  *p,  (void *)p,     (void *)&p);
    printf("%-6s | %-12d | %-18p | %p\n", "**pp", **pp, (void *)*pp, (void *)&pp);
    printf("\n");
    printf("p  = %p  (alamat x)\n", (void *)p);
    printf("pp = %p  (alamat p)\n", (void *)pp);
    printf("*pp = %p (isi p = alamat x)\n", (void *)*pp);

    return 0;
}