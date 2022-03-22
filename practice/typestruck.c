/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typestruck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate_ls <mgranate_ls@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:23:03 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/16 21:37:16 by mgranate_ls      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char	*s_list;
}	anime;

int	main(void)
{
	anime *favorite;
	anime *psycho;

	favorite = (anime *)malloc(sizeof(*favorite));
	favorite->s_list = "Boku no hero";
	printf("%s\n", favorite->s_list);
	psycho = (anime *)malloc(sizeof(*psycho));
	psycho->s_list = "Death Note";
	printf("favorite: %s. Psycho: %s\n", favorite->s_list, psycho->s_list);

}
