/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:10:23 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/05 17:46:58 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stddef.h>
// This next function operates just like the strlen but with a condition that if we find a /n we dont want to iterate more
// This is because we don't want to alocate more memory than it's required to our line variable.
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

int    check_line_end(char *buffer)
{
	int		i;
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	return (buffer[i] != '\n');
}

// The next function will wipe the memory of the buff variable until it finds a new line. Whatever information we have after that new line
// Will be kept and put in the beggining of the buff variable
void	ft_clean_buff(char *buff)
{
	int	i;
	int	j;
	
	i = 0;
	j = -1;
	while (buff[i])
	{
		
		if (j == -1 && buff[i] == '\n')	// We use the variable j as a check condition. In case we do find a \n in the string we turn the j into 0 so that we can pass by true 
			j = 0;						// the next else condition wich will allow to pass the information in the end of the buff variable to the beginning.
		else if (j >= 0)
			buff[j++] = buff[i];
		buff[i++] = 0;	
	}
}

// This next function will input the line information to the variable line.
// We manage to get this by using a temp array wich will hold the buff information and pass it afterwards to the line variable.
// Afterwards we need to wipe it clean the temp varaiable to avoid leeks and because we need that variable for later to insert
// Information with each iteration of the loop in our main function condition. 
char	*ft_get_line(char *line, char *buff)
{
	int		i;
	int		j;	
	char	*temp;
	//Two whiles: Um para copiar a informacao do temp para o line e o outro a informacao do buff para o Line.
	temp = line;
	i = 0;
	line = malloc(sizeof(char) * ft_strlen(buff) + ft_strlen(line) + 1);
	while (temp && temp[i])
	{
		line[i] = temp[i];
		i++;		
	}
	j = 0;
	while (buff[j])
	{
		line[i++] = buff[j];
		if (buff[j++] == '\n')
			break ;
	}
	line [i] = '\0';
	if (temp)
		free(temp);
	return (line);	
}