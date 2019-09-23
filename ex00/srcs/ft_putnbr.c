/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 13:01:38 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 13:58:34 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

int		quantity_nb(int nb)
{
	int i;

	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		i = i + 1;
	}
	return (i);
}

int		pow_10(int n)
{
	int i;
	int p;

	p = 1;
	i = 0;
	while (i < n)
	{
		p = p * 10;
		i = i + 1;
	}
	return (p);
}

void	ft_putnbr(int nb)
{
	int	quan_first;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	quan_first = quantity_nb(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	while (quan_first > 0)
	{
		ft_putchar(nb / pow_10(quan_first - 1) + 48);
		nb = nb % pow_10(quan_first - 1);
		quan_first = quan_first - 1;
	}
}
