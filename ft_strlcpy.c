/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:42 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:46 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*d;
	size_t	len;

	d = dst;
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (--size && *src)
		*d++ = *src++;
	*d = 0;
	return (len);
}
