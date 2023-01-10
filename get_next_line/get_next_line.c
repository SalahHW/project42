/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:11:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/10 06:10:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			i;
	int			read_state;
	char		*text;
	char		*line_str;
	static int	line_counter;

	i = 0;
	line_counter = 0;
	text = malloc(sizeof(char) * BUFFER_SIZE);
	while (read_state != 0)
	{
		read_state = read(fd, text, BUFFER_SIZE);
		join_strings(line_str, text);
	}
	return (line_str);
}
