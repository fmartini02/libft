/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_till_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:19:40 by fmartini          #+#    #+#             */
/*   Updated: 2024/04/09 16:20:15 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_till_char(char *s, int i, char c)
{
	int	r;

	r = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		r++;
		i++;
	}
	return (r);
}
