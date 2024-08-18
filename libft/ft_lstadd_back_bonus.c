/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:28:44 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/12 02:28:46 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (last)
		last ->next = new;
	else
		*lst = new;
}

/*void	print_t_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current)
	{
		printf("%s ", (char *)current ->content);
		current = current ->next;
	}
	printf("\n");
}

int	main(void)
{
	// Create new nodes
    t_list *node1 = ft_lstnew("I");
    t_list *node2 = ft_lstnew("want");
    t_list *node3 = ft_lstnew("churros");

	node1 ->next = node2;
	ft_lstadd_back(NULL, node3);
	print_t_list(node1);
	return (0);
}*/
