/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:11:57 by elena             #+#    #+#             */
/*   Updated: 2024/08/14 10:58:18 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

/** @struct s_list
 * 
 *  @brief node of a linked list
 * 
 *  @param content content of the node
 * 
 *  @param next pointer to the next node
*/
typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

/** @brief Retrieves a line
 * 
 *  @param fd file descriptor
 * 
 *  @return string
*/
char	*get_next_line(int fd);

/** @brief Locates a new line (NL)
 * 
 *  @param list pointer to a node of the list
 * 
 *  @retval 1 if '\\n' found
 *  @retval 0 if not found
*/
int		find_nl(t_list *list);

/** @brief Find the last node of a list
 * 
 *  @param list pointer to a node of the list
 * 
 *  @return last node of the list
*/
t_list	*ft_lstlast(t_list *list);

/** @brief Gets a line
 * 
 *  @param list pointer to a node of the list
 * 
 *  @return string
*/
char	*read_line(t_list *list);

/** @brief Copies the content of a node into a string
 * 
 *  @param list pointer to a node of the list
 * 
 *  @param str string where the content is copied
 * 
 *  @return void
*/
void	strcopy(t_list *list, char *str);

/** @brief Counts the length till a NL
 * 
 *  @param list pointer to a node of the list
 * 
 *  @return Length until '\\n'
*/
int		len_nl(t_list *list);

/** @brief Update the linked list
 * 
 *  @param list pointer to a linked list
 * 
 *  @return void
*/
void	update_list(t_list **list);

/** @brief Creates a linked list
 * 
 *  @param list pointer to a linked list
 * 
 *  @param fd file descriptor
 * 
 *  @return void
*/
void	create_list(t_list **list, int fd);

/** @brief Appends a new node at the end of the linked list
 * 
 *  @param list pointer to a linked list
 * 
 *  @param buf content of the new node
 * 
 *  @return void
*/
void	ft_lstadd_back(t_list **list, char *buffer);

/** @brief Frees the memory
 * 
 *  @param list pointer to a linked list
 * 
 *  @param clean_node pointer to a node of the list
 * 
 *  @param buf buffer
 * 
 *  @return void
*/
void	free_mem(t_list **list, t_list *node, char *buffer);

#endif