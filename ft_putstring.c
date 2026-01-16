/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <agomoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:33:49 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 21:35:19 by agomoham         ###   ########.fr       */
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
