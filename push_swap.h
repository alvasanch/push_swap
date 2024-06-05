/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:22:12 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/05 12:13:50 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft+gnl+printf/libft.h"

void	check_limits(long number);
int		total_cost(int a, int b);
int		check_dup(int *numbers, int cost);
int		is_spaces(char *str);
long	ft_atol(char *str);
void	free_matrix(char **matrix);
void	free_matrix_error(char **matrix);
void	free_stack(t_stack **lst);
void	print_error(void);

#endif