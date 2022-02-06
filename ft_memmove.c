/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:50:20 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 23:05:50 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, n));
}

/*int		main(void)
{
	unsigned char s[] = "0123456789";
	unsigned char s2[] = "0123456789";

	printf("%s\n", ft_memmove(s, s+2, 5));
	printf("%s\n", memmove(s2, s2+2, 5));
}*/
