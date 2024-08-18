/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:39:16 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 16:22:40 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	print_error(t_list **stack_a, t_list **stack_b, char *order)
{
	write(2, "Error\n", 6);
	free_stack(stack_a);
	free_stack(stack_b);
	free(order);
	exit(2);
}

void	new_order(t_list **stack_a, t_list **stack_b, char *order)
{
	if (ft_strcmp("sa\n", order) == 0)
		sa(*stack_a, 0);
	else if (ft_strcmp("sb\n", order) == 0)
		sb(*stack_b, 0);
	else if (ft_strcmp("ss\n", order) == 0)
		ss(*stack_a, *stack_b);
	else if (ft_strcmp("pa\n", order) == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp("pb\n", order) == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp("ra\n", order) == 0)
		ra(stack_a, 0);
	else if (ft_strcmp("rb\n", order) == 0)
		rb(stack_b, 0);
	else if (ft_strcmp("rr\n", order) == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp("rra\n", order) == 0)
		rra(stack_a, 0);
	else if (ft_strcmp("rrb\n", order) == 0)
		rrb(stack_b, 0);
	else if (ft_strcmp("rrr\n", order) == 0)
		rrr(stack_a, stack_b);
	else if (order)
		print_error(stack_a, stack_b, order);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*order;

	if (argc < 2)
		exit (2);
	stack_a = NULL;
	stack_b = NULL;
	new_stack(&stack_a, argv);
	while (1)
	{
		order = get_next_line(0);
		if (!order)
			break ;
		new_order(&stack_a, &stack_b, order);
		free(order);
	}
	if ((is_sorted(stack_a) == 1) && !stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
