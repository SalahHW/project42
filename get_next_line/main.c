/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:08:10 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/09 03:41:42 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int main(void)
{
	int fd;
	fd = open("test.txt", O_RDONLY);
	if (fd >= 0)
	{
		printf("%s\n", get_next_line(fd));
		printf("%s\n", get_next_line(fd));
		close(fd);
	}
	return (0);
}
