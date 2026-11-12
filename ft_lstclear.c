/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 20:58:07 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 10:10:12 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
}
