/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:54:00 by alvasanc          #+#    #+#             */
/*   Updated: 2024/07/08 09:37:26 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*last_stack;
	t_stack	*second_last_stack;
	t_stack	*new_first;

	last_stack = *stack;
	second_last_stack = NULL;
	new_first = NULL;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last_stack->next != NULL)
	{
		second_last_stack = last_stack;
		last_stack = last_stack->next;
	}
	second_last_stack->next = NULL;
	last_stack->next = *stack;
	new_first = last_stack;
	*stack = new_first;
}

void	rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}

void	m_rrr(t_stack **stack_a, t_stack **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		rrr(stack_a, stack_b);
		(*cost_a)++;
		(*cost_b)++;
	}
}
