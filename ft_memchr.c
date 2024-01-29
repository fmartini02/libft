/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:08:57 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:08:59 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
	}
	return (NULL);
}
