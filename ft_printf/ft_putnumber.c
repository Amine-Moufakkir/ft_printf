/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:37 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 20:13:23 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(int nbr)
{
	int		count;
	long	lnbr;

	count = 0;
	lnbr = nbr;
	if (lnbr < 0)
	{
		count += ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr > 9)
	{
		count += ft_putnumber(lnbr / 10);
		count += ft_putchar((lnbr % 10) + '0');
	}
	else
	{
		count += ft_putchar((lnbr % 10) + '0');
	}
	return (count);
}
