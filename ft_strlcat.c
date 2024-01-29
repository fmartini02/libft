/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:35 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:38 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	char	*d;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (d_len >= size)
		return (size + s_len);
	d = dst + d_len;
	size -= d_len + 1;
	while (size-- && *src)
		*d++ = *src++;
	*d = 0;
	return (d_len + s_len);
}
