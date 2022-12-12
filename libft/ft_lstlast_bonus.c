/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:05:51 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/11 23:52:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*t_list  *ft_lstlast(t_list *lst)
{
    if (lst)
    {
        while(lst->next != NULL)
        {
            lst = lst->next;
        }
        return (lst);
    }
    return (NULL);
    }*/

t_list *ft_lstlast(t_list *lst) {
  t_list *courant = lst;
  while (courant != NULL && courant->next != NULL) {
    courant = courant->next;
  }
  return courant;
}
