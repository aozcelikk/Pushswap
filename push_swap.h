/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:56:49 by aozcelik          #+#    #+#             */
/*   Updated: 2022/06/28 15:56:52 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct push_swap
{
	int	*a;
	int	*b;
	int	*c;
	int	a_len;
	int	b_len;
	int	c_len;
	int	max_bit;
}		t_stack;

//to_short
void		triple(t_stack *stack);
void		tripler(t_stack *stack);
void		twor(t_stack *stack);
void		the_four(t_stack *stack);
void		the_five(t_stack *stack);
void		multi(t_stack *stack);
void		bubble_sort(t_stack *stack);
void		find_max_bit(t_stack *stack);
void		value_to_index(t_stack *stack);
int			find_index(t_stack *stack, int number);

//check_arg
int			check_line(t_stack *var);
int			check_param_empty(char **v);
int			check_space(char **v);
int			check_repeat(t_stack *var);
int			check_arg(char **v);

//helper
long long	ft_atoi(char *str, t_stack *var);
void		to_sort(t_stack *stack);
void		quit(t_stack *va, int c);
void		parametre_var(t_stack *va, char **v, int c);
char		**file_line(char **av, char **tmp, int *ac);
int			ft_printf(const	char *s, ...);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strlen(char *s);
char		**ft_split(char *s, char c);
int			cont(char *s);
void		free_tmp(char **tmp);

//pivot helper
int			get_index(int *lst, int len, int num);
int			get_max(int *lst, int len);
int			get_min(int *lst, int len);
int			pivot_under(int *lst, int len, int pivot);
int			average(int *lst, int len);

//swap
void		swapab(int *lst, int len);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);

//push
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		par(t_stack *stack);

//rotate
void		rotater(int *lst, int len);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);

//reverse rotate
void		reverse_rotate(int *lst, int len);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);

#endif