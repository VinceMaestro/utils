/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:44:03 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/29 22:25:01 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*reader;
	char	**words;

	i = 0;
	j = 0;
	count = 0;
	reader = NULL;
	words = NULL;
	if (s == NULL)
		return (words);
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (words);
	i = 0;
	words[count] = 0;
	reader = (char *)s;
	while (*reader)
	{
		if (*reader != c && *reader)
			j++;
		if (*reader == c && j)
		{
			words[i] = (char *)malloc(sizeof(char) * (j + 1));
			ft_memcpy(words[i],reader - j, j);
			words[i][j] = '\0';
			j = 0;
			i++;
		}
		reader++;
	}
	return (words);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	char **test;

	i = 0;
	j = 0;
	if (argc != 2)
		return (1);
	test = ft_strsplit(argv[1], ' ');
	while (*test++)
		printf("%s\n", *test);
	return (0);
}
