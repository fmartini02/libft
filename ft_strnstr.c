/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:11:08 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:11:13 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (len-- && *big && little[i])
	{
		if (*big == little[i])
			i++;
		else if (i)
		{
			len += i;
			big -= i;
			i = 0;
		}
		big++;
	}
	if (!little[i])
		return ((char *)(big - i));
	return (NULL);
}
