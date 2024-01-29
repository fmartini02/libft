/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:11:23 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:11:28 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	cycle(char const *s1, char const *set, int sign)
{
	size_t	len;
	size_t	trim_c;

	trim_c = 0;
	len = ft_strlen(s1);
	if (sign < 0)
		s1 += len - 1;
	while (len--)
	{
		if (ft_in(*s1, set))
			trim_c++;
		else
			break ;
		s1 += sign;
	}
	return (trim_c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	size_t		i;
	char		*trim;
	size_t		temp;

	size = ft_strlen(s1);
	temp = cycle(s1, set, 1);
	if (temp == size)
		size = 1;
	else
		size -= temp + cycle(s1, set, -1) - 1;
	trim = (char *)malloc((size) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	s1 += (cycle(s1, set, 1));
	while (--size)
	{
		trim[i] = *s1;
		s1++;
		i++;
	}
	trim[i] = 0;
	return (trim);
}
