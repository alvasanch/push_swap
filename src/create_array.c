/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:01:46 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/07 12:42:34 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_array(char **argv)
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
	while (new_matrix[i])
		number[j++] = ft_atol(new_matrix[i++]);
	if (check_dup(number, len) == 0)
		print_error();
}
