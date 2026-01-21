/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:23:22 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 22:23:24 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstring(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putpointer(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		count += ft_putnumber(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunsignedint(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthexanumber(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_putchar('%');
	else
	{
		count += write(1, "%", 1);
		count += ft_putchar(c);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	if (write(1, "", 0) == -1 || !str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_parse_format(args, str[i + 1]);
			i++;
		}
		else if (str[i] != '%')
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
