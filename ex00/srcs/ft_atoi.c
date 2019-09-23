/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 13:09:23 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 14:33:27 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check(char *str)
{
	while (*str != '+' && *str != '-' && (*str < '0' || *str > '9'))
	{
		if (*str > 32)
		{
			return (0);
		}
		str = str + 1;
	}
	if (*str == '+' || *str == '-')
	{
		return (str + 1);
	}
	return (str);
}

int		is_negative(char *str)
{
	if (str == 0)
	{
		return (0);
	}
	if (*str == '-')
	{
		return (-1);
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int		n;
	char	*s;
	int		count;

	count = 0;
	s = str;
	n = 0;
	str = check(str);
	if (str == 0)
	{
		return (0);
	}
	while (str != 0 && *str >= '0' && *str <= '9')
	{
		if (n > 214748365 || n < -214748365)
		{
			return (-1);
		}
		n = n * 10;
		n = n + *str - '0';
		str = str + 1;
	}
	return (n * is_negative(s));
}
