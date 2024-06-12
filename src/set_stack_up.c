/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:18:57 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/12 11:19:33 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_stack_up(char **argv)
{
	char	**new_matrix;
	int		*number;
	int		len;
	int		j;
	int		i;

	len = 0;
	j = 0;
	i = 0;
	new_matrix = ft_split(argv[1], ' ');
	while (new_matrix[len])
		len++;
	number = malloc(sizeof(int) * len);
	if (!number)
		return ;
	while (new_matrix[i])
		number[j++] = ft_atol(new_matrix[i++]);
	if (check_dup(number, len) == 0)
		free_matrix_error(new_matrix);
	create_stack(number, len);
	free_matrix(new_matrix);
}

void	create_stack(int *array, int len)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_b = NULL;
	stack_a = make_stack(array, len);
	check_stack_prop(&stack_a);
}

void	check_stack_prop(t_stack **stack)
{
	if (is_sorted(*stack) == 1)
	{
		free_stack(stack);
		return ;
	}
}

t_stack		*make_stack(int *numbers, int len)
{
	int			i;
	t_stack		*stack_a;

	i = 0;
	stack_a = new_stack(numbers[i]);
	i++;
	while (i < len)
	{
		stack_add_back(&stack_a, new_stack(numbers[i]));
		i++;
	}
	return (stack_a);
}