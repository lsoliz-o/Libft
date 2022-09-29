/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:57:07 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/27 08:05:04 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	if (!dst && dstsize == 0)
		return (0);
	while (src[j] != '\0')
		j++;
	k = 0;
	while (dst[k] != '\0' && dstsize >= 0)
		k++;
	i = 0;
	if (dstsize <= k)
		return (j + dstsize);
	while (src[i] && (i + k) < dstsize - 1)
	{
		dst[i + k] = src[i];
		i++;
	}
	dst[i + k] = '\0';
	return (j + k);
}
