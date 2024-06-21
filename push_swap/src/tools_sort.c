/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:25:18 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/21 12:27:51 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	assign_index(t_stack *stack)
{
	t_stack	*aux;
	t_stack	*min_value;
	int		index;

	aux = stack;
	index = 1;
	while (aux)
	{
		while (aux && aux->index != -1)
			aux = aux->next;
		if (!aux)
			return ;
		min_value = aux;
		while (aux)
		{
			if (aux->data < min_value->data && aux->index == -1)
				min_value = aux;
			aux = aux->next;
		}
		min_value->index = index;
		index++;
		aux = stack;
	}
}

void	assign_pos(t_stack *stack)
{
	t_stack	*aux;
	int		position;

	position = 0;
	aux = stack;
	while (aux)
	{
		aux->pos = position;
		aux = aux->next;
		position++;
	}
}

int	find_smallest(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*smallest;
	int		position;

	aux = *stack;
	smallest = *stack;
	position = 0;
	while (aux)
	{
		if (smallest->index > aux->index)
		{
			position = aux->pos;
			smallest = aux;
		}
		aux = aux->next;
	}
	return (position);
}

void	assign_target_pos(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*b;
	t_stack	*a;
	t_stack	*closets;

	b = *stack_b;
	while (b)
	{
		a = *stack_a;
		closets = NULL;
		while (a)
		{
			if (b->data < a->data
				&& (closets == NULL || closets->data > a->data))
				closets = a;
			a = a->next;
		}
		if (closets == NULL)
			b->target_pos = find_smallest(stack_a);
		else
			b->target_pos = closets->pos;
		b = b->next;
	}
}

void	lowest_to_top(int check, t_stack **stack)
{
	int	i;

	i = 0;
	if (check <= stack_size(*stack) / 2)
	{
		while (i < check)
		{
			ra(stack);
			i++;
		}
	}
	else
	{
		i = check;
		while (i < stack_size(*stack))
		{
			rra(stack);
			i++;
		}
	}
}
