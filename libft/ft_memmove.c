/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:15:57 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/18 12:15:59 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if ((!d && !s) || len == 0)
		return (dst);
	if (d > s && d < s + len)
	{
		d += len -1;
		s += len -1;
		while (len > 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}

/*int	main(void)
{
	char	source[] = "Hola, mundo!";
	char	destination[20];
	char	source2[] = "Hola, mundo!";
	char	destination2[20];


	printf("Sin solapamiento:\n");
	ft_memmove(destination, source, strlen(source) + 1);
	printf("destination: %s\n\n", destination);

	printf("Con solapamiento:\n");
	ft_memmove(destination + 5, destination, strlen(destination) + 1);
	printf("destination: %s\n", destination);

	printf("Sin solapamiento:\n");
	memmove(destination2, source2, strlen(source2) + 1);
	printf("destination: %s\n\n", destination2);

	printf("Con solapamiento:\n");
	memmove(destination2 + 5, destination2, strlen(destination2) + 1);
	printf("destination: %s\n", destination2);
}*/
