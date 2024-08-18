/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:22:26 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 16:22:28 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (uc == *s)
			return ((char *)s);
		s++;
	}
	if (uc == *s)
		return ((char *)s);
	return (0);
}

/*int	main(void)
{
	printf("Original: %s\n", strchr("teste", 't' + 256));
	printf("My function: %s", ft_strchr("teste", 't' + 256));
	return (0);
}*/
