/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:36:00 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/18 18:42:39 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*n;

	i = 0;
	n = b;
	while (i < len)
	{
		n[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main ()
{
	char str [50];

	strcpy(str, "this is string.h library function");
	puts(str);

	ft_memset(str, 'r', 10);
	puts(str);

	return 0;
}*/
