/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:49 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:52 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (len);
	while (str[len])
		len++;
	return ((size_t)len);
}
