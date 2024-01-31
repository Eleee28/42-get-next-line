/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:35:21 by elena             #+#    #+#             */
/*   Updated: 2024/01/31 08:15:43 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// for using printf
#include <stdio.h>
/// defines open()
#include <unistd.h>
// defines the flags (O_RDONLY)
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*file_name;
	char	*line;
	int		i;

	i = 0;
	fd = open(file_name, O_RDONLY);
	line = get_next_line(fd);
	printf("%d: %s", i++, line);
	line = get_next_line(fd);
	printf("%d: %s", i++, line);
	line = get_next_line(fd);
	printf("%d: %s", i++, line);
}

/*
int	main(void)
{
	int		fd1, fd2;
	char	*file_name;
	char	*line1, *line2;
	int		i, j;

	file_name = "../files/test2.txt";
	fd2 = open(file_name, O_RDONLY);
	fd1= open("../files/test1.txt", O_RDONLY);
	if (fd2 != -1 && fd1 != -1)
	{
		i = 0;
		j = 0;
		line1 = get_next_line(fd1);
		printf("%d: %s", i++, line1);
		line2 = get_next_line(fd2);
		printf("%d: %s", j++, line2);
		while (line1 || line2)
		{
			if (line1)
			{
				line1 = get_next_line(fd1);
				printf("%d: %s", i++, line1);
			}
			if (line2)
			{
				line2 = get_next_line(fd2);
				printf("%d: %s", j++, line2);
			}
		}
	}
	close(fd1);
	close(fd2);
	return (0);
}
*/

/*
	if (fd != -1)
	{
		i = 0;
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
		while (line && ((line[0] == '\n' && line[1] != '\n') 
			|| (line[0] != '\n')))
		{
			line = get_next_line(fd);
			printf("%d: %s", i++, line);
		}
	}
	*/

	/*if (fd != -1)
	{
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
		line = get_next_line(fd);
		printf("%d: %s", i++, line);
	}
	
	*/