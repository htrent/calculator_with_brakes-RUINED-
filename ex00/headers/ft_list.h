/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:04:57 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 21:04:57 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list_char
{
	struct s_list_char	*next;
	char				data;
}					t_list_char;

typedef	struct		s_list_ll
{
	struct s_list_ll	*next;
	long long			data;
}					t_list_ll;

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					pr(char c);
int					op(int a, int b, char c);
int					ft_atoi(char *str);
t_list_char			*ft_create_elem_char(char data);
t_list_ll			*ft_create_elem_ll(long long data);
void				ft_push_ll(t_list_ll **begin_list,
					long long data);
void				ft_push_ch(t_list_char **begin_list,
					char data);
void				ft_putnbr(int nb);
long long			pl(t_list_ll **begin_list);
char				ft_pop_ch(t_list_char **begin_list);
int					eval_expr(char *str);
int					ft_strlen(char *str);

#endif
