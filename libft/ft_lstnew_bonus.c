/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:27:09 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/12 02:27:15 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node ->content = content;
	new_node ->next = NULL;
	return (new_node);
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
	node2 ->next = node3;
	print_t_list(node1);
	return (0);
}*/
