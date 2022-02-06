/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:58:37 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 18:38:15 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sc;
	size_t	dc;

	if (!dst && src && !dstsize)
		return (ft_strlen(src));
	sc = ft_strlen(src);
	dc = ft_strlen(dst);
	dst += dc;
	if (dstsize <= dc)
		return (sc + dstsize);
	while (dstsize - dc > 1 && *src != '\0')
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (sc + dc);
}

/*int	main(void)
{
	char	*s1 = strdup("0123456789");
	char    *s2 = strdup("abcdefghijk");
	char    *s3 = strdup("0123456789");
	char    *s4 = strdup("abcdefghijk");

	printf("dst_len=%zu\ndst=%s\nsrc=%s\n",strlcat(s1, s2, 0), s1, s2);
	printf("dst_len=%zu\ndst=%s\nsrc=%s\n",ft_strlcat(s3, s4, 0), s3, s4);
	return (0);
}*/
