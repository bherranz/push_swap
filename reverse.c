/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:55:51 by bherranz          #+#    #+#             */
/*   Updated: 2024/02/26 15:33:30 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a, int print)
{
	t_list	*penult;
	t_list	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	penult = *stack_a;
	while (penult->next->next)
		penult = penult->next;
	last = penult->next;
	last->next = *stack_a;
	penult->next = NULL;
	*stack_a = last;
	if (print)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int print)
{
	t_list	*penult;
	t_list	*last;

	if (!*stack_b || (*stack_b)->next == NULL)
		return ;
	penult = *stack_b;
	while (penult->next->next)
		penult = penult->next;
	last = penult->next;
	last->next = *stack_b;
	penult->next = NULL;
	*stack_b = last;
	if (print)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a && (*stack_a)->next) || (*stack_b && (*stack_b)->next))
		write(1, "rrr\n", 4);
	rra(stack_a, 0);
	rrb(stack_b, 0);
}
