/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:20:41 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 23:55:59 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	found_head(char const *s1, char const *set)
{
	size_t	s1_head;
	size_t	s1_tail;
	size_t	set_c;

	s1_head = 0;
	s1_tail = ft_strlen(s1);
	set_c = 0;
	while (set[set_c] != '\0' && s1_head < s1_tail)
	{
		while (set[set_c] == s1[s1_head])
		{
			s1_head++;
			set_c = 0;
		}
		set_c++;
	}
	return (s1_head);
}

static size_t	found_tail(char const *s1, char const *set)
{
	size_t	s1_head;
	size_t	s1_tail;
	size_t	set_c;

	s1_head = found_head(s1, set);
	s1_tail = ft_strlen(s1);
	set_c = 0;
	while (set[set_c] != '\0' && s1_head < s1_tail)
	{
		while (set[set_c] == s1[s1_tail - 1])
		{
			s1_tail--;
			set_c = 0;
		}
		set_c++;
	}
	return (s1_tail);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trim;
	size_t	s1_head;
	size_t	s1_tail;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_head = found_head(s1, set);
	s1_tail = found_tail(s1, set);
	i = 0;
	s1_trim = (char *)malloc(sizeof(char) * (s1_tail - s1_head + 1));
	if (s1_trim == NULL)
		return (NULL);
	while (s1_head < s1_tail)
		s1_trim[i++] = s1[s1_head++];
	s1_trim[i] = '\0';
	return (s1_trim);
}
