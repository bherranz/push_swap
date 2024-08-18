/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:59:37 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/27 12:59:39 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	length;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(length);
	i = 0;
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	printf("%s", ft_strjoin("hay", "pizza"));
	return (0);
}*/
