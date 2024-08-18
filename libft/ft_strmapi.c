/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:08:25 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/27 13:08:28 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	ft_convert(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	i = i;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (!s || !f)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	char	*s = "ABCD123";

	printf("%s", ft_strmapi(s, ft_convert));
	return (0);
}*/
