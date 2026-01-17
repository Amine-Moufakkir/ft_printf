/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:07:53 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/17 01:07:55 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *string)
{
	int	index;

	index = 0;
	if (!string)
	{
		return (write(1, "(null)", 6));
	}
	while (string[index])
	{
		ft_putchar(string[index]);
		index++;
	}
	return (index);
}
