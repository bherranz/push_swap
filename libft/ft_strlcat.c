/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:49:30 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 13:49:34 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	filled_ds;
	size_t	src_size;
	size_t	total_size;
	size_t	i;

	i = 0;
	filled_ds = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize < filled_ds)
		total_size = src_size + dstsize;
	else
		total_size = filled_ds + src_size;
	while (src[i] && filled_ds + 1 < dstsize)
	{
		dst[filled_ds] = src[i];
		filled_ds++;
		i++;
	}
	dst[filled_ds] = '\0';
	return (total_size);
}

/*int	main(void)
{
	char	src[] = "5332";
	char	dest[0] = "";
	char	dest2[0] = "";


	printf("Original: %lu, %s\n", strlcat(dest, src, 0), dest);
	printf("My function: %lu, %s", ft_strlcat(dest2, src, 0), dest2);
	return (0);
}*/
