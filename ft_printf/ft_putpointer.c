/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:46 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 20:13:29 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long ptr)
{
	int	count;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count = 0;
	count += ft_putstring("0x");
	count += ft_puthexanumber(ptr, 'x');
	return (count);
}
