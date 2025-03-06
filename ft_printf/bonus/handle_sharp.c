/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_sharp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:49:44 by francema          #+#    #+#             */
/*   Updated: 2025/01/07 15:57:36 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	handle_sharp(t_info *info, char c, t_flags *flags)
{
	unsigned int	u;

	u = va_arg(*(info->args), int);
	if (u != 0)
	{
		if (c == 'x')
			lputstr("0x", &(info->p_b));
		else
			lputstr("0X", &(info->p_b));
	}
	lputexa(u, info, c);
	flags->done = 1;
}
