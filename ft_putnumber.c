/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:37 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/17 01:07:39 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(int number)
{
	int		char_count;
	long	long_number;

	char_count = 0;
	long_number = number;
	if (long_number < 0)
	{
		char_count += ft_putchar('-');
		long_number = -long_number;
	}
	if (long_number > 9)
	{
		char_count += ft_putnumber(long_number / 10);
		char_count += ft_putchar((long_number % 10) + '0');
	}
	else
	{
		char_count += ft_putchar((long_number % 10) + '0');
	}
	return (char_count);
}
