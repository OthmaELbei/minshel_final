/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:25:18 by oelbied           #+#    #+#             */
/*   Updated: 2025/05/03 10:59:38 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_lstclear(t_listenv **lst, void (*del)(void*))
{
	t_listenv	*temp;
	t_listenv	*next;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	temp = *lst;
	while (temp != NULL)
	{
		next = temp -> next;
		del(temp);
		temp = next;
	}
	*lst = NULL;
}
