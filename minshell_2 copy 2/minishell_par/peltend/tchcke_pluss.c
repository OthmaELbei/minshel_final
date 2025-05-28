/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tchcke_pluss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:42:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/05/21 12:41:55 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	thcking_pluss(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' && str[i + 1] == '=')
		{
			return (1);
		}
		else if (str[i] == '+' && str[i + 1] != '=')
		{
			printf("'%s':not a valid identifier\n", str);
			return (0);
		}
		i++;
	}
	return (0);
}

int	tchking_egal(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (i > 0 && str[i - 1] != '+' && str[i] == '=')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
