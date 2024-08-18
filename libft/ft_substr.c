/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:17:01 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/26 13:17:03 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > i - start)
		len = i - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while ((len-- > 0) && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	printf("%s\n", ft_substr(NULL, 2, 1));
	return (0);
}*/
