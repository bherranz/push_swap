/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:28:45 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/19 13:28:47 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1 < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	src[] = "";
	char	dest[0];
	char	dest2[0];


	printf("Original: %lu, %s\n", strlcpy(dest, src, 0), dest);
	printf("My function: %lu, %s", ft_strlcpy(dest2, src, 0), dest2);
	return (0);
}*/
