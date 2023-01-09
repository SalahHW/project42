/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:11:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/09 03:39:22 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	int		buffer_size;
	int		read_state;
	char	*text;
	char	*line_str;
	static int	line_counter;

	buffer_size = 42;
	i = 0;
	line_counter = 0;
	text = malloc(sizeof(char) * buffer_size);
	read_state = read(fd, text, buffer_size);
	while (text[i] != '\n' && read_state != 0)
	{
		i++;
	}
	line_str = malloc(sizeof(char) * i);
	i = 0;
	while (*text != '\n')
	{
		line_str[i] = *text;
		text++;
		i++;
	}
	line_str[i] = *text;
	line_str[i + 1] = '\0';
	return (line_str);
}
