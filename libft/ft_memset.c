/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:59:53 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/16 14:59:56 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bp;
	size_t			count;

	bp = (unsigned char *)b;
	count = 0;
	while (count < len)
	{
		*bp = (unsigned char)c;
		bp++;
		count++;
	}
	return (b);
}

/*int	main(void)
{
	char	buffer[10];

	memset(buffer, 'A', sizeof(buffer));
	printf("buffer: %s\n", buffer);
	return (0);
}*/
