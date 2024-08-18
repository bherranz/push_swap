/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:37:59 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 19:38:01 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*us1;
	unsigned const char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*us1 != *us2)
			return ((int)(*us1) - (int)(*us2));
		us1++;
		us2++;
		n--;
	}
	return (0);
}

/*int	main(void)
{
	printf("Original: %i\n", memcmp("", "", 0));
	printf("My function: %i", ft_memcmp("", "", 0));
	return (0);
}*/
