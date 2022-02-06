/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:08:55 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 20:22:56 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_counter(int n)
{
	size_t	digit_c;

	digit_c = 0;
	if (n < 0)
		digit_c++;
	while (n != 0)
	{
		n = (long)n / 10;
		digit_c++;
	}
	return (digit_c);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digit_c;
	long int	n_cp;

	if (n == 0)
		return (ft_strdup("0"));
	digit_c = digit_counter((long)n);
	str = (char *)malloc(sizeof(char) * (digit_c + 1));
	if (str == NULL)
		return (NULL);
	str[digit_c--] = '\0';
	if (n < 0)
		n_cp = (long)n * -1;
	else
		n_cp = (long)n;
	while (n_cp != 0)
	{
		str[digit_c--] = n_cp % 10 + '0';
		n_cp = n_cp / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
