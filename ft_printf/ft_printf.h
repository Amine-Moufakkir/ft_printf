/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:06:46 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/21 20:13:03 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_parse_format(va_list args, const char c);
int	ft_printf(const char *str, ...);
int	ft_putnumber(int nbr);
int	ft_putunsignedint(unsigned int unbr);
int	ft_putchar(int c);
int	ft_putstring(char *s);
int	ft_puthexanumber(unsigned long unbr, const char format);
int	ft_putpointer(unsigned long ptr);

#endif
