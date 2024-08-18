/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:59:32 by bherranz          #+#    #+#             */
/*   Updated: 2024/03/27 13:00:24 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*max_n(t_list *stack)
{
	t_list	*aux;

	aux = stack;
	while (stack)
	{
		if (stack->content > aux->content)
			aux = stack;
		stack = stack->next;
	}
	return (aux);
}

t_list	*find_node(t_list *stack, int pos)
{
	while (pos > 0)
	{
		stack = stack->next;
		pos--;
	}
	return (stack);
}

int	calculate_index(t_list *stack, int number, char letter)
{
	int		index;
	int		index_low;
	t_list	*min_node;
	t_list	*max_node;

	index = 0;
	index_low = lowest_pos(&stack);
	min_node = find_node(stack, index_low);
	max_node = max_n(stack);
	while (stack)
	{
		if (stack->content == number && letter == 'b')
			return (index);
		if (stack->next && (stack->content < number
				&& stack->next->content > number) && letter == 'a')
			return (index + 1);
		if ((index == index_low) && letter == 'a' && min_node->content > number)
			return (index);
		if (stack == max_node && max_node->content < number)
			return (index + 1);
		stack = stack->next;
		index++;
	}
	return (0);
}
