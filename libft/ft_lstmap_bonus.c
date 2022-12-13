/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 07:01:45 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/13 08:21:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*cur;
	void	*tmp;

	if (!f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		tmp = (f)(lst->content);
		cur = ft_lstnew(tmp);
		if (cur == NULL)
		{
			free(tmp);
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, cur);
		lst = lst->next;
	}
	return (newlist);
}
