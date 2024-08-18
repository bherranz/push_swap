/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:41:40 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 16:41:42 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	const char		*start;

	uc = (unsigned char)c;
	start = s;
	while (*s)
		s++;
	while (s >= start)
	{
		if (uc == *s)
			return ((char *)s);
		s--;
	}
	return (0);
}

/*int	main(void)
{
	printf("Original: %s\n", strrchr("sd", '\0'));
	printf("My function: %s", ft_strrchr("sd", '\0'));
	return (0);
}*/
