/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:43:56 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/12 10:58:36 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*new_stack(int number)
{
	t_stack		*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data = number;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*stack_last(t_stack *lst)
{
	t_stack		*aux_node;

	aux_node = lst;
	if (!lst)
		return (0);
	while (aux_node->next)
		aux_node = aux_node->next;
	return (aux_node);
}

void	stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack		*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = stack_last(*lst);
		last_node->next = new;
	}
}

int	is_sorted(t_stack *stack)
{
	t_stack		*temp;

	temp = stack;
	if (stack == NULL || stack->next == NULL)
		return (0);
	while (temp->next)
	{
		if (temp->data > tem->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}