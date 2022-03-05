/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:10:48 by mgranate          #+#    #+#             */
/*   Updated: 2022/03/05 18:14:56 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <fcntl.h>

// # ifndef BUFFERSIZE
// #  define BUFFER_SIZE 0
// # endif

char	*get_next_line(int fd);
char	*ft_get_line(char *line, char *buff);

void	ft_clean_buff(char *buff);

int    check_line_end(char *buffer);
size_t	ft_strlen(const char *s);

#endif