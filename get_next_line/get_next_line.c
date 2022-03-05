/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:38:46 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/05 18:17:49 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char static buff[FOPEN_MAX][BUFFER_SIZE];
	char	*line;
	size_t	i;
	size_t	re;
	
	if (fd < 0 || fd > 1024 || BUFFER_SIZE < 1 || read(fd, 0, 0) == -1)
		return (0);
	line = NULL;
	i = 1;
	while (i)
	{
		re = 1;
		if (!buff[fd][0]) //So queremos ler o ficheiro novamento se o buffer nao tiver sobra. 
			re = read(fd, buff[fd], BUFFER_SIZE); 
		i = check_line_end(buff[fd]) && re > 0; //Checks if the value of i is either 1/0 if 1 keeps on looping if 0 leaves the loop and returns the line we want.
		if (re > 0)
			line = 	ft_get_line(line, buff[fd]);
		ft_clean_buff(buff[fd]);
	}
	return (line);
}

// int	main ()
// {
// 	int fd;
// 	char *str;
	
// 	fd = open("read", O_RDONLY); //file is bname read and the scound parameter is to inform the program to read.
// 	str = get_next_line(fd);
// 	printf("(%s)", str);

// }