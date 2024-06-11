#include "../push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack *aux;

	if (*src != NULL & *dest = NULL)
	{
		aux = (*src)->next;
		(*src)->next = *dest;
		*dest = *src;
		*src = aux;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
}

void	pb(t_stack **stack_a, t_stack_b **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}