/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:35:21 by elena             #+#    #+#             */
/*   Updated: 2024/08/14 11:57:26 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// for using printf
#include <stdio.h>
/// defines open()
#include <unistd.h>
// defines the flags (O_RDONLY)
#include <fcntl.h>

// Read just one line from a file
/*
int	main(void)
{
	int		fd;
	char	*file_name;
	char	*line;

	file_name = "files/quijote.txt";
	fd = open(file_name, O_RDONLY);
    line = get_next_line(fd);
	printf("Line read: %s", line);
    free(line);
	close(fd);
	return (0);
}
*/

// Read a whole file
/*
int	main(void)
{
	int		fd;
	char	*file_name;
	char	*line;
	int		i;
	
	printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
	file_name = "files/quijote.txt";
	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		i = 0;
		line = get_next_line(fd);
		printf("Line %d: %s", ++i, line);
		while (line && i < 7)
		{
			sleep(1);
            free(line);
			line = get_next_line(fd);
			printf("Line %d: %s", ++i, line);
		}
        if (line)
            free(line);
	}
	close(fd);
	return (0);
}
*/

// Read just one line from stdin
/*
int	main(void)
{
	char	*line;
	int		i;

    line = get_next_line(0);
	printf("Line read: %s", line);
    free(line);
	return (0);
}
*/

// Read infinite lines (until ^C) from stdin
/*
int	main(void)
{
	char	*line;
	int		i;

	i = 0;
	line = get_next_line(0);
	printf("Line %d: %s", ++i, line);
	while (line)
	{
        free(line);
		line = get_next_line(0);
		printf("Line %d: %s", ++i, line);
	}
    if (line)
    {
        free(line);
    }
	return (0);
}
*/
