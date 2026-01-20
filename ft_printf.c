/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:05:58 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/20 22:49:09 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_print(va_list args_list, const char c)
{
	int	nbr_printed;

	nbr_printed = 0;
	if (c == 'c')
		nbr_printed += ft_putchar(va_arg(args_list, int));
	else if (c == 's')
		nbr_printed += ft_putstring(va_arg(args_list, char *));
	else if (c == 'p')
		nbr_printed += ft_putpointer(va_arg(args_list, unsigned long));
	else if (c == 'd' || c == 'i')
		nbr_printed += ft_putnumber(va_arg(args_list, int));
	else if (c == 'u')
		nbr_printed += ft_putunsignedint(va_arg(args_list, unsigned int));
	else if (c == 'x' || c == 'X')
		nbr_printed += ft_puthexanumber(va_arg(args_list, unsigned int), c);
	else if (c == '%')
		nbr_printed += ft_putchar('%');
	else
	{
		nbr_printed += write(1 , "%", 1);
		nbr_printed += ft_putchar(c);
	}
	return (nbr_printed);
}

int	ft_printf(const char *mandatory_arg, ...)
{
	int		i;
	va_list	args_list;
	int		nbr_printed;

	i = 0;
	nbr_printed = 0;
	va_start(args_list, mandatory_arg);
	if (write(1, "", 0) == -1 || !mandatory_arg)
		return (-1);
	while (mandatory_arg[i])
	{
		if (mandatory_arg[i] == '%' && mandatory_arg[i + 1])
		{
			nbr_printed += ft_type_print(args_list, mandatory_arg[i + 1]);
			i++;
		}
		else if (mandatory_arg[i] != '%')
			nbr_printed += ft_putchar(mandatory_arg[i]);
		i++;
	}
	va_end(args_list);
	return (nbr_printed);
}
