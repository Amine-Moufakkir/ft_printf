/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexanumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:28 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 20:13:27 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexanumber(unsigned long unbr, char format)
{
	int		count;
	char	*lower_hex;
	char	*upper_hex;

	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	count = 0;
	if (unbr > 15)
		count += ft_puthexanumber(unbr / 16, format);
	if (format == 'x')
		count += write(1, &lower_hex[unbr % 16], 1);
	else
		count += write(1, &upper_hex[unbr % 16], 1);
	return (count);
}
