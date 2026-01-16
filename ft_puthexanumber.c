/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexanumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:33:25 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 21:35:14 by agomoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexanumber(unsigned long number, char format)
{
	int		char_count;
	char	*lower_hex;
	char	*upper_hex;

	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	char_count = 0;
	if (number > 15)
		char_count += ft_puthexanumber(number / 16, format);
	if (format == 'x')
		char_count += write(1, &lower_hex[number % 16], 1);
	else
		char_count += write(1, &upper_hex[number % 16], 1);
	return (char_count);
}
