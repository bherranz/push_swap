/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:55:00 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 13:07:58 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_list **stack_a, int print)
{
	t_list	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	while ((last)->next != NULL)
		last = (last)->next;
	(last)->next = *stack_a;
	*stack_a = (*stack_a)->next;
	(last)->next->next = NULL;
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int print)
{
	t_list	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	while ((last)->next != NULL)
		last = (last)->next;
	(last)->next = *stack_b;
	*stack_b = (*stack_b)->next;
	(last)->next->next = NULL;
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
}
