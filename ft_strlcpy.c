/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:28:23 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 23:41:29 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (--dstsize && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}

/*int		main(void)
{
	char *s1 = strdup("abcdefghijk");
	char *s2 = strdup("0123456789");
	char *s3 = strdup("abcdefghijk");
	char *s4 = strdup("0123456789");

	printf("src_size=%zu\ndst=%s\n", strlcpy(s1, s2, 0), s1);
	printf("src_size=%zu\ndst=%s\n", ft_strlcpy(s3, s4, 0), s3);
}*/
