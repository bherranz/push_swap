/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:28:16 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/12 02:28:21 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

/*int	main(void)
{
	// Create new nodes
    t_list *node1 = ft_lstnew("I");
    t_list *node2 = ft_lstnew("want");
    t_list *node3 = ft_lstnew("churros");

	node1 ->next = node2;
	node2 ->next = node3;
	printf("%s", (char *)ft_lstlast(node1)->content);
	return (0);
}*/
