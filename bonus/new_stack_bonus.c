/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:20:03 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 17:23:29 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	new_node(t_list **stack, int content)
{
	t_list	*new_node;

	new_node = ft_lstnew(content);
	ft_lstadd_back(stack, new_node);
}

void	generate_node(t_list **stack, char **chop)
{
	long	content;
	int		i;

	i = 0;
	while (chop[i])
	{
		if (!is_valid(chop[i]))
		{
			write(2, "Error\n", 6);
			free_stack(stack);
			free_str_array(chop);
			exit(2);
		}
		content = ft_atoi(chop[i]);
		if (content > INT_MAX || content < INT_MIN)
		{
			write(2, "Error\n", 6);
			free_stack(stack);
			free_str_array(chop);
			exit(2);
		}
		new_node(stack, (int)content);
		i++;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*next;
	t_list	*aux;
	t_list	*first;

	if (!stack || !(*stack))
		return ;
	aux = *stack;
	first = *stack;
	next = aux->next;
	while (next)
	{
		aux = next;
		next = (next)->next;
		free(aux);
	}
	free(first);
}

void	new_stack(t_list **stack_a, char **argv)
{
	char	**chop;

	argv++;
	while (*argv)
	{
		chop = ft_split_spaces(*argv);
		generate_node(stack_a, chop);
		free_str_array(chop);
		argv++;
	}
	if (*stack_a == NULL || is_repeated(*stack_a))
		print_error(stack_a, NULL, NULL);
}
