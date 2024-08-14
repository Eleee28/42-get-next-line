/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:35:21 by elena             #+#    #+#             */
/*   Updated: 2024/08/14 11:30:21 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// for using printf
#include <stdio.h>
/// defines open()
#include <unistd.h>
// defines the flags (O_RDONLY)
#include <fcntl.h>

// Read two lines from several files
/*
int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("files/quijote.txt", O_RDONLY);
	fd2 = open("files/romeo_juliet.txt", O_RDONLY);
    {
        line1 = get_next_line(fd1);
        printf("Line read[fd1]: %s", line1);
        free(line1);
    }
    {
        line2 = get_next_line(fd2);
        printf("Line read[fd2]: %s", line2);
        free(line2);
    }
    {
        line1 = get_next_line(fd1);
        printf("Line read[fd1]: %s", line1);
        free(line1);
    }
    {
        line2 = get_next_line(fd2);
        printf("Line read[fd2]: %s", line2);
        free(line2);
    }
    {
        line1 = get_next_line(fd1);
        printf("Line read[fd1]: %s", line1);
        free(line1);
    }
    {
        line2 = get_next_line(fd2);
        printf("Line read[fd2]: %s", line2);
        free(line2);
    }
	close(fd1);
	close(fd2);
	return (0);
}
*/

// Read several whole files
/*
int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;
	int		i;

	fd1 = open("files/quijote.txt", O_RDONLY);
	fd2 = open("files/romeo_juliet.txt", O_RDONLY);
	if (fd1 != -1 && fd2 != -1)
	{
		i = 1;
		line1 = get_next_line(fd1);
		printf("[fd%d] Line %d: %s", fd1, i, line1);
		line2 = get_next_line(fd2);
		printf("[fd%d] Line %d: %s", fd2, i, line2);
		i++;
		while ((line1 || line2) && i < 7)
		{
			sleep(1);
			if (line1)
			{
                free(line1);
				line1 = get_next_line(fd1);
				printf("[fd%d] Line %d: %s", fd1, i, line1);
			}
			if (line2)
			{
                free(line2);
				line2 = get_next_line(fd2);
				printf("[fd%d] Line %d: %s", fd2, i, line2);
			}
			i++;
		}
        if (line1)
            free(line1);
        if (line2)
            free(line2);
	}
	close(fd1);
	close(fd2);
	return (0);
}
*/
