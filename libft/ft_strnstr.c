/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:54:50 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 19:54:52 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	const char	*new;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		new = haystack;
		while (*new == needle[i] && len > i && *new)
		{
			i++;
			new++;
		}
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("Original: %s\n", strnstr("abcd\0abcd", "abcd", 9));
	printf("My function: %s", ft_strnstr("abcd\0abcd", "abcd", 9));
	return (0);
}*/
