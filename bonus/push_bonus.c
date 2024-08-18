/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:48:22 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 16:23:59 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!stack_b || !*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	(temp)->next = *stack_a;
	*stack_a = temp;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!stack_a || !*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	(temp)->next = *stack_b;
	*stack_b = temp;
}
