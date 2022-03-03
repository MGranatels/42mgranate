/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:36:49 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/03 18:12:45 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_extra(unsigned long int n)
{
	int			count;
	long int	nb;

	nb = n;
	count = 0;
	if (nb > 9)
	{
		count += ft_printf_extra(nb / 10);
		count += ft_printf_extra(nb % 10);
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}
