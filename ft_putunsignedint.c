/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:33:52 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 21:33:53 by agomoham         ###   ########.fr       */
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
