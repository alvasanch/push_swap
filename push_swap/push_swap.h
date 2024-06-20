/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:22:12 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/20 11:21:44 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft+gnl+printf/libft.h"

typedef struct s_stack
{
	struct s_stack	*next;
	int				index;
	int				data;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				total_cost;
	int				pos;
}					t_stack;

void	check_limits(long number);
int		check_dup(int *numbers, int cost);
int		is_spaces(char *str);
long	ft_atol(char *str);
int		total_cost(int a, int b);
void	free_matrix(char **matrix);
void	free_matrix_error(char **matrix);
void	free_stack(t_stack **lst);
void	print_error(void);
void	set_stack_up(char **argv);
void	create_stack(int *array, int len);
void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rev_rot(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
t_stack	*new_stack(int number);
t_stack	*stack_last(t_stack *lst);
void	stack_add_back(t_stack **lst, t_stack *new);
t_stack	*make_stack(int *numbers, int len);
int		is_sorted(t_stack *stack);
void	check_stack_prop(t_stack **stack);
void	send_b(t_stack **stack_a, t_stack **stack_b);
int		stack_size(t_stack *stack);
void	set_costs(t_stack **stack_a, t_stack **stack_b);
void	put_total_cost(t_stack **stack);
void	smallest_cost(t_stack **stack_a, t_stack **stack_b);
void	move_ra(t_stack **stack, int *cost_a);
void	move_rb(t_stack **stack, int *cost_b);
void	move_rra(t_stack **stack, int *cost_a);
void	move_rrb(t_stack **stack, int cost_b);
void	mov_rrr(t_stack **stack_a, t_stack **stack_b, int *cost_a, int *cost_b);
void	move_rr(t_stack **stack_a, t_stack **stack_b, int *cost_a, int *cost_b);


#endif