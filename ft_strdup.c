/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 03:31:32 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/25 04:11:39 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1) +1;
	p = (char *)malloc(len);
	if (!(p))
		return (NULL);
	ft_memcpy(p, s1, len);
	return (p);
}
