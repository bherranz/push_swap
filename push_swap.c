/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:59:05 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 17:22:28 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cases(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || is_repeated(*stack_a))
	{
		write(2, "Error\n", 6);
		free_stack(stack_a);
		exit (2);
	}
	if (is_sorted(*stack_a))
	{
		free_stack(stack_a);
		exit(0);
	}
	if ((*stack_a)->next->next == NULL)
		sort2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort5(stack_a, stack_b);
	else
		general_algorithm(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**chop;

	argv++;
	if (argc < 2)
		exit (2);
	stack_a = NULL;
	while (*argv)
	{
		chop = ft_split_spaces(*argv);
		generate_node(&stack_a, chop);
		free_str_array(chop);
		argv++;
	}
	stack_b = NULL;
	cases(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	exit (0);
}
