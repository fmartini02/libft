/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:09:03 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:09:07 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (n--)
	{
		if (*s != *ss)
			return (*s - *ss);
		s++;
		ss++;
	}
	return (0);
}
