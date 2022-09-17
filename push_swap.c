/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:37:00 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:37:03 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_sort(t_stack *stack)
{
	if (stack->a_len == 2 && stack->a[1] < stack->a[0])
		sa(stack);
	else if (stack->a_len == 3)
		triple(stack);
	else if (stack->a_len == 4)
		the_four(stack);
	else if (stack->a_len == 5)
	{	
		bubble_sort(stack);
		find_max_bit(stack);
		value_to_index(stack);
		the_five(stack);
	}
	else
	{
		bubble_sort(stack);
		find_max_bit(stack);
		value_to_index(stack);
		multi(stack);
	}
}

void	quit(t_stack *va, int c)
{
	if (c == 1 || c == 5)
		ft_printf("Error\n");
	if (c != 2 && c != 5)
	{
		if (va)
		{
			free(va->a);
			free(va->b);
			free(va->c);
		}
	}
	exit (0);
}

void	parametre_var(t_stack *va, char **tmp, int c)
{
	long long	n;
	int			i;

	i = 0;
	va->a = (int *)malloc(sizeof(int) * (c - 1));
	va->b = (int *)malloc(sizeof(int) * (c - 1));
	va->b_len = 0;
	if (!va->a || !va->b)
		quit(va, 1);
	while (tmp[i])
	{
		n = ft_atoi(tmp[i], va);
		if (n > 2147483647 || n < -2147483648)
			quit(va, 1);
		va->a[i] = (int)n;
		i++;
	}
	va->a_len = i;
}

char	**file_line(char **av, char **tmp, int *ac)
{
	int		i;
	char	*tab;

	tab = NULL;
	i = 1;
	if (check_space(av) == 0)
		quit(0, 5);
	while (av[i])
	{
		tab = ft_strjoin(tab, av[i++]);
		tab = ft_strjoin(tab, "  ");
	}
	tmp = ft_split(tab, ' ');
	i = 0;
	free(tab);
	if (!tmp || !*tmp)
		exit (0);
	while (tmp[i])
		i++;
	*ac = i + 1;
	return (tmp);
}

int	main(int ac, char **av)
{
	t_stack	var;
	char	**tmp;

	tmp = NULL;
	if (ac < 2)
		exit(0);
	if (ac >= 2 && (cont(av[1]) == 5))
		quit(0, 5);
	tmp = file_line(av, tmp, &ac);
	if (check_arg(tmp) == 0 || !check_param_empty(av))
		quit(0, 5);
	parametre_var(&var, tmp, ac);
	free_tmp(tmp);
	if (check_repeat(&var) == 0)
		quit(&var, 1);
	if (check_line(&var) == 5)
		quit(&var, 0);
	if (ac >= 3 && ac <= 502)
		to_sort(&var);
	quit(&var, 2);
}
