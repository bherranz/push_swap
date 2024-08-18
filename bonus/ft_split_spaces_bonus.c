/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_spaces_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:07:46 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/08 12:31:17 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

#include <stdlib.h>

int	is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

void	free_str_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (is_whitespace(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_whitespace(str[i]))
			i++;
	}
	return (count);
}

char	*get_next_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_whitespace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_whitespace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_spaces(char *str)
{
	char	**chop;
	int		num_words;
	int		i;

	num_words = count_words(str);
	chop = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!chop)
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		while (is_whitespace(*str))
			str++;
		chop[i] = get_next_word(str);
		if (!chop[i])
		{
			free_str_array(chop);
			return (NULL);
		}
		while (*str && !is_whitespace(*str))
			str++;
		i++;
	}
	chop[i] = NULL;
	return (chop);
}
