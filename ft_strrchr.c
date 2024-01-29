/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:11:16 by fmartini          #+#    #+#             */
/*   Updated: 2024/01/28 16:11:20 by fmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		check;

	check = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			temp = (char *) s;
			check = 1;
		}
		s++;
	}
	if (!c)
		return ((char *)s);
	if (!check)
		return (0);
	return (temp);
}
