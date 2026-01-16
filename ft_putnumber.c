/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:27:38 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 21:27:28 by agomoham         ###   ########.fr       */
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
