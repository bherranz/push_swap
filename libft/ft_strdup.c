/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:06:46 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/26 12:06:57 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	while (s[i])
		i++;
	new = malloc (i + 1);
	if (!new)
		return (NULL);
	while (i >= 0)
	{
		new[i] = s[i];
		i--;
	}
	return (new);
}

/*int	main(void)
{
	const char *original = "Hello, world!";
    char *ft_result = ft_strdup(original);

    if (ft_result == NULL) {
        printf("Error: ft_strdup failed.\n");
        return 1;
    }

    printf("Resultado de ft_strdup: %s\n", ft_result);

    char *std_result = strdup(original);

    if (std_result == NULL) {
        printf("Error: strdup failed.\n");
        return 1;
    }

    printf("Resultado de strdup: %s\n", std_result);

    // Liberar memoria asignada
    free(ft_result);
    free(std_result);

    return (0);
}*/
