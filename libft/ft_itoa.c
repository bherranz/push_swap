/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:08:07 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/27 13:08:09 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

static char	*putn(int n, char *num, int len, int neg)
{
	num = num + len - 1;
	*num = '\0';
	if (n == 0)
	{
		num--;
		*num = '0';
	}
	while (n > 0)
	{
		num--;
		*num = n % 10 + '0';
		n = n / 10;
	}
	if (neg == 1)
	{
		num--;
		*num = '-';
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		neg;
	int		len;

	neg = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		neg = 1;
		n = -n;
	}
	len = neg + digits(n) + 1;
	num = malloc(len);
	if (!num)
		return (NULL);
	return (putn(n, num, len, neg));
}

/*int	main(void)
{
	printf("My number: %s\n", ft_itoa(-2147483648));
	return (0);
}*/
