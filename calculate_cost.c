/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:50:53 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/05 12:17:00 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	aux_rotatec(int *index_a, int *index_b, int size_a, int size_b)
{
	int	move;

	move = 0;
	while (((*index_a) <= (size_a / 2) && (*index_b) <= (size_b / 2))
		&& (*index_a) != 0 && (*index_b) != 0)
	{
		(*index_a)--;
		(*index_b)--;
		move++;
	}
	while ((*index_a) <= (size_a / 2) && (*index_a) != 0)
	{
		(*index_a)--;
		move++;
	}
	while ((*index_b) <= (size_b / 2) && (*index_b) != 0)
	{
		(*index_b)--;
		move++;
	}
	return (move);
}

int	aux_reversec(int *index_a, int *index_b, int size_a, int size_b)
{
	int	move;

	move = 0;
	while ((*index_a) > (size_a / 2) && (*index_b) > (size_b / 2)
		&& (*index_a) != size_a && (*index_b) != size_b)
	{
		(*index_a)++;
		(*index_b)++;
		move++;
	}
	while ((*index_a) > (size_a / 2) && (*index_a) != size_a)
	{
		(*index_a)++;
		move++;
	}
	while ((*index_b) > (size_b / 2) && (*index_b) != size_b)
	{
		(*index_b)++;
		move++;
	}
	return (move);
}

int	calculate_cost(t_list *stack_a, t_list *stack_b, t_list *node, int inb)
{
	int	index_a;
	int	movements;
	int	size_a;
	int	size_b;

	index_a = calculate_index(stack_a, node->content, 'a');
	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	movements = 0;
	if (index_a <= (size_a / 2) || inb <= (size_b / 2))
		movements += aux_rotatec(&index_a, &inb, size_a, size_b);
	if (index_a > (size_a / 2) || inb > (size_b / 2))
		movements += aux_reversec(&index_a, &inb, size_a, size_b);
	return (movements);
}
