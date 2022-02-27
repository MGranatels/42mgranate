/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:11:11 by mgranate          #+#    #+#             */
/*   Updated: 2022/02/18 14:12:09 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char * dst, const char *  src, size_t dstsize);

int	main ()
{
	char str1[] = "Hello ";
	char str2[] = "Hello ";
	char dest1[11] = "World";
	char dest2[11] = "World";
	printf("%zu\n", ft_strlcat(str1, dest1, 7));
	printf("%s\n", dest1);

}