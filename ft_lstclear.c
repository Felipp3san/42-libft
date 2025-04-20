/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:35:06 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 15:35:16 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	if (*lst == NULL)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
}
