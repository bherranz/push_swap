/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:57:21 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 16:57:24 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		if (n == 1)
			return (0);
		else
		{
			s1++;
			s2++;
			n--;
		}
	}
	return ((int)((unsigned char)(*s1) - (unsigned char)(*s2)));
}

/*int	main(void)
{
	printf("Original: %i\n", strncmp("hey", "hi", 2));
	printf("My function: %i", ft_strncmp("hey", "hi", 2));
	return (0);
}*/
