#include "../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first_stack;
	t_stack	*last_stack;

	first_stack = *stack;
	last_stack = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last_stack->next != NULL)
	{
		last_stack = last_stack->next;
	}
	last_stack->next = first_stack;
	*stack = (*stack)->next;
	first_stack->next = NULL;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}