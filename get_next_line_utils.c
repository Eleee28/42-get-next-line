/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:22:16 by elena             #+#    #+#             */
/*   Updated: 2024/01/31 08:24:14 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @details
 * - Search for '\n' in the list, in a single node at most BUFFER_SIZE 
 * 	bytes are searched
*/
int	find_nl(t_list *list)
{
	int	i;

	if (!list)
		return (0);
	while (list)
	{
		i = 0;
		while (list->content[i] && i < BUFFER_SIZE)
		{
			if (list->content[i] == '\n')
				return (1);
			i++;
		}
		list = list->next;
	}
	return (0);
}

/**
 * @details (Bonus libft)
*/
t_list	*ft_lstlast(t_list *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}

/**
 * @details
 * - Length until '\n' is reached in the list
*/
int	len_nl(t_list *list)
{
	int	i;
	int	len;

	if (!list)
		return (0);
	len = 0;
	while (list)
	{
		i = 0;
		while (list->content[i])
		{
			if (list->content[i] == '\n')
			{
				len++;
				return (len);
			}
			i++;
			len++;
		}
		list = list->next;
	}
	return (len);
}

/**
 * @details
 * - Creates a new node (with buffer as content) and adds it at 
 * 	the last of the list
*/
void	ft_lstadd_back(t_list **list, char *buffer)
{
	t_list	*new;
	t_list	*last;

	last = ft_lstlast(*list);
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return ;
	if (!last)
		*list = new;
	else
		last->next = new;
	new->content = buffer;
	new->next = 0;
}

/**
 * @details
 * - Copy the content of the nodes up to '\n' into str (add '\n' at the end)
*/
void	strcopy(t_list *list, char *str)
{
	int	i;
	int	j;

	if (list)
	{
		i = 0;
		while (list)
		{
			j = 0;
			while (list->content[j])
			{
				if (list->content[j] == '\n')
				{
					str[i++] = '\n';
					str[i] = 0;
					return ;
				}
				str[i++] = list->content[j++];
			}
			list = list->next;
		}
		str[i] = 0;
	}
}
