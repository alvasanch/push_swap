/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:22:12 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/07 11:39:00 by alvasanc         ###   ########.fr       */
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

void	check_limits(long number);
int		total_cost(int a, int b);
int		check_dup(int *numbers, int cost);
int		is_spaces(char *str);
long	ft_atol(char *str);
void	free_matrix(char **matrix);
void	free_matrix_error(char **matrix);
void	free_stack(t_stack **lst);
void	print_error(void);
void    make_array(char **argv);

#endif