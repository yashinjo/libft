/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:52:36 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 18:44:48 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_p;
	size_t	n_len;

	h_p = 0;
	n_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	else if (!haystack && !len)
		return (NULL);
	while (haystack[h_p] != '\0' && (h_p + n_len) <= len)
	{
		if (ft_strncmp(haystack + h_p, needle, n_len) == 0)
			return ((char *)(haystack + h_p));
		h_p++;
	}
	return (NULL);
}
