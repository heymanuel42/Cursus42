/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:54:33 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/15 13:21:29 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands/commands.h"
#include <stdlib.h>

int	check_is_numeric(const char *arg)
{
	int		j;

	while (j < ft_strlen(arg))
	{
		j = 0;
		if (!ft_isdigit(arg[j])
			&& !(arg[j] == '-' || arg[j] == '+'))
			return (-1);
		j++;
	}
	return (0);
}

t_stack	*build_stack(int n, char **data, int id)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->size = n;
	stack->nb_el = n;
	stack->id = id;
	stack->data = malloc(sizeof(int *) * n);
	if (stack->data == NULL)
	{
		free(stack);
		return (NULL);
	}
	if (data == NULL)
	{
		stack->nb_el = 0;
		ft_bzero(stack->data, n);
		return (stack);
	}
	while (i < n)
	{
		if (check_is_numeric(data[i]) < 0)
		{
			free(stack->data);
			free(stack);
			return (NULL);
		}
		stack->data[i] = ft_atoi(data[i]);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = build_stack(argc - 1, (argv + 1), 'a');
	b = build_stack(argc - 1, NULL, 'b');
	if (a == NULL)
	{
		ft_printf("error\n");
		return (-1);
	}
	print_stack(*a);
	print_stack(*b);
	push(a, b, 1);
	push(a, b, 1);
	push(a, b, 1);
	print_stack(*a);
	print_stack(*b);
	rr_rotate(a, b);
	print_stack(*a);
	print_stack(*b);
	sswap(a, b);
	print_stack(*a);
	print_stack(*b);
	free(a);
	free(b);
	return (0);
}
