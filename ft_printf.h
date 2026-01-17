/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:06:46 by amoufakk          #+#    #+#             */
/*   Updated: 2026/01/17 01:06:49 by amoufakk         ###   ########.fr       */
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
