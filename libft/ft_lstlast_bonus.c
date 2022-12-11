/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:05:51 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/11 21:25:36 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
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
}
