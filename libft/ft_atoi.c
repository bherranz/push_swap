/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:22 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/25 11:42:28 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int		neg;
	long	nb;

	neg = 0;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = 1;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

/*int	main(void)
{
	printf("Original: %i\n", atoi("  +00432f2"));
	printf("My function: %i", ft_atoi("  +00432f2"));
	return (0);
}*/
