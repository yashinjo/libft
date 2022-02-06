/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:22:42 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/02 00:43:31 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_counter(char const *s, char c)
{
	size_t	str_c;
	size_t	slen;
	size_t	s_c;

	str_c = 0;
	slen = ft_strlen(s);
	s_c = 0;
	while (s_c < slen)
	{
		if (s[s_c] != c && c != '\0')
		{
			str_c++;
			while (s[s_c] != c && s_c < slen)
				s_c++;
			while (s[s_c] == c)
				s_c++;
		}
		else
			s_c++;
	}
	return (str_c);
}

static size_t	str_size(const char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	return (ft_strchr(s, c) - s);
}

static void	spt_gen(char **spt, const char *s, char c)
{
	size_t	spt_c;
	size_t	s_c;

	spt_c = 0;
	s_c = 0;
	while (s[s_c])
	{
		if (s[s_c] != c && (!s_c || s[s_c - 1] == c) && str_size(&s[s_c], c))
		{
			spt[spt_c++] = ft_substr(s, s_c, str_size(&s[s_c], c));
			if (!spt[spt_c - 1])
			{
				while (spt_c--)
					free(spt[spt_c]);
				free(spt);
				return ;
			}
		}
		s_c++;
	}
	spt[spt_c] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**spt;

	if (s == NULL)
		return (NULL);
	spt = (char **)malloc(sizeof(char *) * (str_counter(s, c) + 1));
	if (spt == NULL)
		return (NULL);
	spt_gen(spt, s, c);
	if (spt == NULL)
		return (NULL);
	return (spt);
}
