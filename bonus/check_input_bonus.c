/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:16:13 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/08 12:30:57 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_sorted(t_list *stack_a)
{
	if (!stack_a)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	is_repeated(t_list *stack_a)
{
	t_list	*stack_copy;

	while (stack_a->next)
	{
		stack_copy = stack_a->next;
		while (stack_copy)
		{
			if (stack_copy->content == stack_a->content)
				return (1);
			stack_copy = stack_copy->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int	is_valid(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
