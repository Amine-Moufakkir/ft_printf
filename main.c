
#include "ft_printf.h"
#include <stdio.h>
#include <fcntl.h>
int main(void)
{
    char big[10000];
    for (int i = 0; i < 9999; i++)
        big[i] = 'A';
    big[9999] = '\0';
	int x = ft_printf("");
    int y= printf("");

    ft_printf("printf return    = %%%d\n", x);
    printf("ft_printf return = %%%d\n", y);
}