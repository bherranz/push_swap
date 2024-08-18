/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:33:01 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/16 19:33:04 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			count;

	p = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*p = 0;
		p++;
		count++;
	}
}

/*int	main(void)
{
	char	buffer[10];

	bzero(buffer, sizeof(buffer));
	printf("buffer: %s\n", buffer);
	return (0);
}*/
