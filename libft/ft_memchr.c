/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:36:23 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 17:36:25 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	unsigned const char	*us;

	uc = (unsigned char)c;
	us = (const unsigned char *)s;
	while (n > 0)
	{
		if (uc == *us)
			return ((void *)us);
		us++;
		n--;
	}
	return (0);
}

/*int	main(void)
{
	printf("Original: %s\n", memchr("teste", 't', 0));
	printf("My function: %s", ft_memchr("teste", 't', 0));
	return (0);
}*/
