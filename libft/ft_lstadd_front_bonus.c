/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:27:32 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/12 02:27:35 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new ->next = *lst;
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

	node2 ->next = node3;
	ft_lstadd_front(&node2, node1);
	print_t_list(node2);
	return (0);
}*/
