/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:38:14 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 18:35:03 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

/*int main(void)
{
	if(ft_isascii(13))
		printf("OK");
	else
		printf("please ascii");
}*/
