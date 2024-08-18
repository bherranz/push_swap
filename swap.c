/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:45 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/04 12:04:49 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack_a, int print)
{
	int	temp;

	if (!stack_a || !stack_a->next)
		return ;
	temp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp;
	if (print)
		write(1, "sa\n", 3);
}

void	sb(t_list *stack_b, int print)
{
	int	temp;

	if (!stack_b || !stack_b->next)
		return ;
	temp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = temp;
	if (print)
		write(1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	if ((stack_a && (stack_a)->next) || (stack_b && (stack_b)->next))
		write(1, "ss\n", 3);
	sa(stack_a, 0);
	sb(stack_b, 0);
}
