/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:08:00 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/17 01:08:02 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignedint(unsigned int unsigned_number)
{
	int	char_count;

	char_count = 0;
	if (unsigned_number > 9)
	{
		char_count += ft_putnumber(unsigned_number / 10);
		char_count += ft_putchar((unsigned_number % 10) + '0');
	}
	else
	{
		char_count += ft_putchar(unsigned_number + '0');
	}
	return (char_count);
}
