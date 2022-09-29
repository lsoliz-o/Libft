/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:55:01 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/28 19:52:27 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nn;

	len = num_len(n);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
		return (0);
	nn = n;
	if (nn < 0)
	{
		s[0] = '-';
		nn = -nn;
	}
	else if (nn == 0)
		s[0] = '0';
	s[len--] = '\0';
	while (nn)
	{
		s[len--] = ((nn % 10) + '0');
		nn /= 10;
	}
	return (s);
}
