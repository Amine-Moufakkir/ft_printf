/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:46 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/17 01:07:48 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long pointer)
{
	int	char_count;

	if (pointer == 0)
		return (write(1, "(nil)", 5));
	char_count = 0;
	char_count += ft_putstring("0x");
	char_count += ft_puthexanumber(pointer, 'x');
	return (char_count);
}
