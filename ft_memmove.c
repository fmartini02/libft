/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:09:18 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:09:20 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char	*d;
	char	*s;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		sign = -1;
		i = n - 1;
	}
	while (n-- && (src || dest))
	{
		d[i] = s[i];
		i += sign;
	}
	return (dest);
}
