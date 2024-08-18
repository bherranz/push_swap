/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:48:19 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/25 12:48:21 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ip;
	size_t			total;
	int				i;

	total = count * size;
	ip = malloc (total);
	if (!ip)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		ip[i] = '\0';
		i++;
		total--;
	}
	return (ip);
}
