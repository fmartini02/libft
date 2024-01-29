/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:07:13 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:07:15 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ar_cpy;
	void			*ar;
	size_t			tot_size;

	tot_size = size * nmemb;
	if (!tot_size)
		tot_size = 1;
	if (tot_size > (size_t) INT_MAX)
		return (NULL);
	ar = malloc(tot_size);
	if (!ar)
		return (NULL);
	ar_cpy = ar;
	while (tot_size--)
	{
		*ar_cpy = 0;
		ar_cpy++;
	}
	return (ar);
}
