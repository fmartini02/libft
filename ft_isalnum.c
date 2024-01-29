/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:07:19 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:07:22 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

static int	ft_isalpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_isalnum(int c)
{
	if (!(ft_isalpha(c) || ft_isdigit(c)))
		return (0);
	return (1);
}
