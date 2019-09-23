/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:07:22 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 13:13:06 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

t_list_ll	*ft_create_elem_ll(long long data)
{
	t_list_ll	*tmp;

	tmp = malloc(sizeof(t_list_ll));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

t_list_char	*ft_create_elem_char(char data)
{
	t_list_char	*tmp;

	tmp = malloc(sizeof(t_list_char));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}
