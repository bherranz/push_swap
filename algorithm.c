/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:35:43 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/04 12:00:20 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_lowest(t_list **stack_a)
{
	int	size_a;
	int	lowest;

	size_a = ft_lstsize(*stack_a);
	lowest = lowest_pos(stack_a);
	if (lowest < (size_a / 2))
	{
		while (lowest != 0)
		{
			ra(stack_a, 1);
			lowest--;
		}
	}
	else
	{
		while (lowest != size_a)
		{
			rra(stack_a, 1);
			lowest++;
		}
	}
}

t_list	*fbest(t_list **stack_a, t_list **stack_b, t_list *min_node, int size_b)
{
	int		index_b;
	t_list	*current;
	int		min_cost;
	int		current_cost;

	index_b = 0;
	current = *stack_b;
	min_cost = INT_MAX;
	while (index_b < size_b)
	{
		current_cost = calculate_cost(*stack_a, *stack_b, current, index_b);
		if (current_cost < min_cost)
		{
			min_node = current;
			min_cost = current_cost;
		}
		index_b++;
		current = (current)->next;
	}
	return (min_node);
}

void	general_algorithm(t_list **stack_a, t_list **stack_b)
{
	int		size_b;
	t_list	*min_cost_node;

	while (ft_lstsize(*stack_a) > 3)
		pb(stack_a, stack_b);
	sort3(stack_a);
	size_b = ft_lstsize(*stack_b);
	while (size_b != 0)
	{
		min_cost_node = fbest(stack_a, stack_b, min_cost_node, size_b);
		organize(stack_a, stack_b, min_cost_node->content);
		pa(stack_a, stack_b);
		size_b -= 1;
	}
	sort_lowest(stack_a);
}
