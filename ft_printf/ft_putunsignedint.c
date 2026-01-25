/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:08:00 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 20:13:25 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignedint(unsigned int unbr)
{
	int	count;

	count = 0;
	if (unbr > 9)
	{
		count += ft_putunsignedint(unbr / 10);
		count += ft_putchar((unbr % 10) + '0');
	}
	else
	{
		count += ft_putchar(unbr + '0');
	}
	return (count);
}
