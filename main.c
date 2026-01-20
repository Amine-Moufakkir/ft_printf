
#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
    char big[10000];
    for (int i = 0; i < 9999; i++)
        big[i] = 'A';
    big[9999] = '\0';

    int r1 = printf("%s\n", big);
    int r2 = ft_printf("%s\n", big);

    printf("printf return    = %d\n", r1);
    printf("ft_printf return = %d\n", r2);
}