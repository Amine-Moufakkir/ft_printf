/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:33:43 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 22:01:13 by agomoham         ###   ########.fr       */
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
