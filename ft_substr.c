/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:11:31 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:11:36 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = ft_strlen(s);
	if (start > i)
		start = i;
	if (i - start < len)
		len = i - start;
	sub = (char *)malloc(len + 1);
	if (!sub || !s)
		return (NULL);
	i = 0;
	s += start;
	while (*s && i < len)
	{
		sub[i] = *s;
		s++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
