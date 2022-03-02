/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:15:07 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/02 18:52:21 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
 #include <stdarg.h>
 
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnb_base(unsigned	int n, char x);
int		ft_putnb_adress(unsigned long int p);
int		ft_print_format(const char *format, va_list *args, int	i);
int		ft_printf_extra(unsigned long int n);

#endif