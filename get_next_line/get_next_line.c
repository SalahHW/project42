/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:11:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/10 06:33:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		read_state;
	char	*text;
	char	*line_str;

	text = malloc(sizeof(char) * BUFFER_SIZE);
	line_str = malloc(sizeof(char) * BUFFER_SIZE);
	if (!text || !line_str)
		return (NULL);
	read_state = 1;
	while (read_state != 0)
	{
		read_state = read(fd, text, BUFFER_SIZE);
		if (read_state != 0)
			line_str = join_strings(line_str, text);
	}
	return (line_str);
}
