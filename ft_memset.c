/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:27:05 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 18:35:36 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bcp;

	bcp = (unsigned char *)b;
	while (len--)
		*bcp++ = c;
	return (b);
}

/*int	main(void)
{
	char	buf[11] = "sslakaksdj";

	ft_memset(buf, '?', 3);
	printf("%s", buf);
}*/
