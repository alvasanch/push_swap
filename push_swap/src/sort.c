/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:24:35 by alvasanc          #+#    #+#             */
/*   Updated: 2024/07/08 09:38:32 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	**aux;

	aux = stack;
	while (is_sorted(*aux) == 0)
	{
		if (is_sorted(*aux) == 1)
			return ;
		if ((*aux)->data > (*aux)->next->data
			&& (*aux)->data > (*aux)->next->next->data)
			ra(aux);
		else if ((*aux)->next->data > (*aux)->data
			&& (*aux)->next->data > (*aux)->next->next->data)
			rra(aux);
		if ((*aux)->data > (*aux)->next->data)
			sa(aux);
	}
	return ;
}

void	loop_moves(t_stack **stack_a, t_stack **stack_b, t_stack *lowest_cost)
{
	int	cost_a;
	int	cost_b;

	cost_a = lowest_cost->cost_a;
	cost_b = lowest_cost->cost_b;
	if (cost_a > 0 && cost_b > 0)
		move_rr(stack_a, stack_b, &cost_a, &cost_b);
	else if (cost_a < 0 && cost_b < 0)
		m_rrr(stack_a, stack_b, &cost_a, &cost_b);
	while (cost_a != 0 || cost_b != 0)
	{
		move_ra(stack_a, &cost_a);
		move_rb(stack_b, &cost_b);
		move_rra(stack_a, &cost_a);
		move_rrb(stack_b, &cost_b);
	}
	pa(stack_a, stack_b);
}

void	sort_and_init(t_stack **stack_a, t_stack **stack_b)
{
	int	check;

	while (*stack_b)
	{
		assign_pos(*stack_a);
		assign_pos(*stack_b);
		assign_target_pos(stack_a, stack_b);
		set_costs(stack_a, stack_b);
		put_total_cost(stack_b);
		smallest_cost(stack_a, stack_b);
	}
	assign_pos(*stack_a);
	check = find_smallest(stack_a);
	lowest_to_top(check, stack_a);
}
