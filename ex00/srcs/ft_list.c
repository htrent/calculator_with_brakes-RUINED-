/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:56:11 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 21:05:55 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

void		ft_push_ll(t_list_ll **begin_list, long long data)
{
	t_list_ll *node;

	node = ft_create_elem_ll(data);
	if (node)
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}

void		ft_push_ch(t_list_char **begin_list, char data)
{
	t_list_char *node;

	node = ft_create_elem_char(data);
	if (node)
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}

long long	pl(t_list_ll **begin_list)
{
	t_list_ll	*tmp;
	int			ret;

	tmp = *begin_list;
	*begin_list = (*begin_list)->next;
	ret = tmp->data;
	free(tmp);
	return (ret);
}

char		ft_pop_ch(t_list_char **begin_list)
{
	t_list_char	*tmp;
	char		ret;

	tmp = *begin_list;
	*begin_list = (*begin_list)->next;
	ret = tmp->data;
	free(tmp);
	return (ret);
}
