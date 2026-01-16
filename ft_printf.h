/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:26:42 by agomoham          #+#    #+#             */
/*   Updated: 2025/11/11 20:26:48 by agomoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_type_print(va_list args_list, const char c);
int	ft_printf(const char *mandatory_arg, ...);
int	ft_putnumber(int n);
int	ft_putunsignedint(unsigned int nb);
int	ft_putchar(int c);
int	ft_putstring(char *str);
int	ft_puthexanumber(unsigned long nbr, const char c);
int	ft_putpointer(unsigned long ptr);

#endif
