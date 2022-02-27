/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:45:22 by mgranate          #+#    #+#             */
/*   Updated: 2022/02/21 21:00:18 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int main ()
{
	printf("%s\n",ft_strtrim("    fofofofofgabrielafofofofofof   ", "f o"));
}	