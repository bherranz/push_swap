/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:52:00 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/04 12:23:24 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aux_rot(t_list **stack_a, t_list **stack_b, int *index_a, int *index_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	if ((*index_a) <= (size_a / 2) || (*index_b) <= (size_b / 2))
	{
		while (((*index_a) <= (size_a / 2) && ((*index_b) <= (size_b / 2)))
			&& (*index_a) != 0 && (*index_b) != 0)
		{
			(*index_a)--;
			(*index_b)--;
			rr(stack_a, stack_b);
		}
		while ((*index_a) <= (size_a / 2) && (*index_a) != 0)
		{
			(*index_a)--;
			ra(stack_a, 1);
		}
		while ((*index_b) <= (size_b / 2) && (*index_b) != 0)
		{
			(*index_b)--;
			rb(stack_b, 1);
		}
	}
}

void	aux_rev(t_list **stack_a, t_list **stack_b, int *index_a, int *index_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	if ((*index_a) > (size_a / 2) || (*index_b) > (size_b / 2))
	{
		while (((*index_a) > (size_a / 2) && (*index_b) > (size_b / 2))
			&& ((*index_a) != size_a && (*index_b) != size_b))
		{
			(*index_a)++;
			(*index_b)++;
			rrr(stack_a, stack_b);
		}
		while (((*index_a) != size_a) && (*index_a) > (size_a / 2))
		{
			(*index_a)++;
			rra(stack_a, 1);
		}
		while ((*index_b) > (size_b / 2) && (*index_b) != size_b)
		{
			(*index_b)++;
			rrb(stack_b, 1);
		}
	}
}

void	organize(t_list **stack_a, t_list **stack_b, int element)
{
	int	index_a;
	int	index_b;
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	index_a = calculate_index(*stack_a, element, 'a');
	index_b = calculate_index(*stack_b, element, 'b');
	if (index_a <= (size_a / 2) || index_b <= (size_b / 2))
		aux_rot(stack_a, stack_b, &index_a, &index_b);
	if (index_a > (size_a / 2) || index_b > (size_b / 2))
		aux_rev(stack_a, stack_b, &index_a, &index_b);
}
