/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:56:19 by mgranate          #+#    #+#             */
/*   Updated: 2022/02/18 18:02:10 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c);

#include <stdio.h>

int	main()
{
	char	s [] = "gehjlgelxzczxczewo";
	char	c;
	
	c = 'e';
	printf("%s\n", ft_strrchr(s, c));
}
