/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:22:12 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/12 10:59:42 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft+gnl+printf/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void		check_limits(long number);
int			check_dup(int *numbers, int cost);
int			is_spaces(char *str);
long		ft_atol(char *str);
void		free_matrix(char **matrix);
void		free_matrix_error(char **matrix);
void		free_stack(t_stack **lst);
void		print_error(void);
void		set_stack_up(char **argv);
void		create_stack(int *array, int len);
void		push(t_stack **src, t_stack **dest);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		rev_rot(t_stack **stack);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rotate(t_stack **stack);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		swap(t_stack **stack);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
t_stack		*new_stack(int number);
t_stack		*stack_last(t_stack *lst);
void		stack_add_back(t_stack **lst, t_stack *new);
t_stack		*make_stack(int *numbers, int len);
int			is_sorted(t_stack *stack);
void		check_stack_prop(t_stack **stack);

#endif