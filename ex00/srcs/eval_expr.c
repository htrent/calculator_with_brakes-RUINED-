/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:33:35 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 21:05:11 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

void	func1(t_list_ll **ods, t_list_char **ors, char *buf)
{
	if ((*ors == 0) || (pr((*ors)->data) < pr(*buf)) || (*ors)->data == '(')
		ft_push_ch(ors, *buf);
	else if (pr((*ors)->data) >= pr(*buf) && (*ors)->data != '(')
	{
		while (*ors && *ods && pr((*ors)->data) >= pr(*buf) &&
		(*ors)->data != '(')
			ft_push_ll(ods, op(pl(ods), pl(ods), ft_pop_ch(ors)));
		ft_push_ch(ors, *buf);
	}
}

void	func2(t_list_ll **ods, char *buf)
{
	ft_push_ll(ods, ft_atoi(buf));
	if (*buf == '-')
		buf++;
	while ((*buf >= '0' && *buf <= '9' && *buf))
		buf++;
	buf--;
}

char	*split(char *str)
{
	char *spl;
	char *buf;
	char *buf2;

	buf = str;
	spl = malloc(ft_strlen(str));
	buf2 = spl;
	while (*buf)
	{
		if (*buf != ' ')
		{
			*spl = *buf;
			spl++;
		}
		buf++;
	}
	*spl = '\0';
	return (buf2);
}

int		eval_expr(char *str)
{
	char		*buf;
	t_list_ll	*ods;
	t_list_char	*ors;

	ods = NULL;
	ors = NULL;
	buf = split(str);
	while (*buf)
	{
		if ((*buf >= '0' && *buf <= '9') || (*buf == '-' && *(buf - 1) == '('))
			func2(&ods, buf);
		else if (*buf != ')')
			func1(&ods, &ors, buf);
		else if (*buf == ')')
		{
			while (ors->data != '(')
				ft_push_ll(&ods, op(pl(&ods), pl(&ods), ft_pop_ch(&ors)));
			ft_pop_ch(&ors);
		}
		buf++;
	}
	if (ods != 0 && ors != 0)
		while (ods && ors)
			ft_push_ll(&ods, op(pl(&ods), pl(&ods), ft_pop_ch(&ors)));
	return (pl(&ods));
}
