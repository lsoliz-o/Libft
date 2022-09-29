/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:38:29 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/24 20:37:27 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((*str != '\0' && str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (nbr * 10) + (str[i] - 48);
		if (nbr > 2147483647 && sign == 1)
			return (-1);
		else if (nbr > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (nbr * sign);
}
/*
int main()
{
    char    *s = " ++1234ab567";
    printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
	return  0;
}*/
