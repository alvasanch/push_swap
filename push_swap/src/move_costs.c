/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_costs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:34:08 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/20 11:05:45 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_ra(t_stack **stack, int *cost_a)
{
	while (*cost_a > 0)
	{
		ra(stack);
		(*cost_a)--;
	}
}

void	move_rb(t_stack **stack, int *cost_b)
{
	while (*cost_b > 0)
	{
		rb(stack);
		(*cost_b)--;
	}
}

void	move_rra(t_stack **stack, int *cost_a)
{
	while (*cost_a < 0)
	{
		rra(stack);
		(*cost_a)++;
	}
}

void	move_rrb(t_stack **stack, int cost_b)
{
	while (*cost_b < 0)
	{
		rrb(stack);
		(*cost_b)++;
	}
}
