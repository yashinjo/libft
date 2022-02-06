/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:17:16 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 22:10:10 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[] = "0123456789";
	char	src[] = "0123456789";
	char    src2[] = "0123456789";

	printf("%s\n", ft_memcpy(src2+3, src2, 4));
	printf("%s\n", memcpy(dst+3, dst, 4));
	printf("%s\n", memmove(src+3, src, 4));
}*/
