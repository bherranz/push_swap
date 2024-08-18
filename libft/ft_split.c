/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:07:46 by bherranz          #+#    #+#             */
/*   Updated: 2024/02/22 12:39:30 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;
	char	prev;

	count = 0;
	prev = c;
	while (*s)
	{
		if (*s != c && prev == c)
			count++;
		prev = *s;
		s++;
	}
	return (count);
}

static char	*new_word(char const *s, char c, int i)
{
	char	*new;
	int		start;
	int		end;
	int		j;

	start = 0;
	end = 0;
	j = 0;
	while (s[end])
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (i == j)
		{
			new = ft_substr(s, start, end - start);
			return (new);
		}
		j++;
		start = end;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**chop;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	chop = malloc((count + 1) * sizeof(char *));
	if (!chop)
		return (NULL);
	i = 0;
	while (count > i)
	{
		chop[i] = new_word(s, c, i);
		if (chop[i] == NULL)
		{
			while (i-- > 0)
				free(chop[i]);
			free(chop);
			return (NULL);
		}
		i++;
	}
	chop[i] = NULL;
	return (chop);
}

/*int	main(void)
{
	char	**chip = ft_split("\0aa\0", '\0');

	if (chip)
	{
		while (*chip)
		{
			printf("%s\n", *chip);
			chip++;
		}
	}
	return (0);
}*/
