/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:14:01 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/04 12:32:29 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_pos(t_list **stack)
{
	t_list	*aux;
	int		min_content;
	int		min_index;
	int		index;

	aux = *stack;
	if (aux)
		min_content = (aux)->content;
	index = 0;
	min_index = 0;
	while (aux)
	{
		if ((aux)->content < min_content)
		{
			min_index = index;
			min_content = aux->content;
		}
		aux = (aux)->next;
		index++;
	}
	return (min_index);
}

void	sort2(t_list **stack_a)
{
	rra(stack_a, 1);
}

void	sort3(t_list **stack)
{
	if (is_sorted(*stack))
		return ;
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->content > (*stack)->next->next->content)
	{
		if ((*stack)->next->content > (*stack)->next->next->content)
		{
			sa(*stack, 1);
			rra(stack, 1);
		}
		else
			ra(stack, 1);
	}
	else if ((*stack)->content > (*stack)->next->content)
		sa(*stack, 1);
	else if ((*stack)->content > (*stack)->next->next->content)
		rra(stack, 1);
	else
	{
		sa(*stack, 1);
		ra(stack, 1);
	}
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	int	min_pos;

	min_pos = lowest_pos(stack_a);
	if (min_pos == 1)
		sa(*stack_a, 1);
	else if (min_pos == 2)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (min_pos == 3)
		rra(stack_a, 1);
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	int	min_pos;

	min_pos = lowest_pos(stack_a);
	if (min_pos == 1)
		sa(*stack_a, 1);
	else if (min_pos == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (min_pos == 3)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (min_pos == 4)
		rra(stack_a, 1);
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
