/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:09 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:13 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup_str;

	dup_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (*s)
	{
		dup_str[i] = *s;
		s++;
		i++;
	}
	dup_str[i] = 0;
	return (dup_str);
}
