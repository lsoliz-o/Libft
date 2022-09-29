/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:27:08 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/09/28 21:00:55 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static char	*get_word(const char *s, char c)
{
	int		n;
	int		i;
	char	*word;

	i = 0;
	n = 0;
	while (s[n] && s[n] != c)
		n++;
	word = (char *)malloc(sizeof(char) * (n + 1));
	if (!word)
		return (0);
	while (i < n)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;

	i = 0;
	if (!s)
		return (0);
	p = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!p)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			p[i++] = get_word(s, c);
			if (p[i - 1] == NULL)
				free (p);
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	p[i] = NULL;
	return (p);
}
/*
int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}*/