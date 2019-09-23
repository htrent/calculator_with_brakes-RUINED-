/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:07:15 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 13:58:04 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

int		op(int a, int b, char c)
{
	if (c == '+')
		return (b + a);
	if (c == '-')
		return (b - a);
	if (c == '/')
		return (b / a);
	if (c == '*')
		return (b * a);
	if (c == '%')
		return (b % a);
	return (0);
}
