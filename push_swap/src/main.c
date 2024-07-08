/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:34:24 by alvasanc          #+#    #+#             */
/*   Updated: 2024/06/26 11:03:56 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 0)
			print_error();
		if (is_spaces(*argv) == 0)
			print_error();
		set_stack_up(argv);
	}
	else if (argc == 1)
		return (0);
	else
	{
		print_error();
	}
}
