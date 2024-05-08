/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:17:16 by fmartini          #+#    #+#             */
/*   Updated: 2024/04/11 14:40:09 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_print_mat(char **mat)
{
	int	j;

	j = 0;
	while (mat[j])
	{
		printf("\n%s\n", mat[j++]);
	}
}
