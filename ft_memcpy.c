/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:09:12 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:09:14 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;

	d = dest;
	while (n && !(!dest && !src))
	{
		*d = *(char *)src;
		src++;
		d++;
		n--;
	}
	return (dest);
}
