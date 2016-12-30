/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:31:51 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/30 14:55:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_words(char const *s, char c)
{
	size_t	word;
	size_t	current_letter;

	word = 0;
	current_letter = 0;
	while (s[current_letter])
	{
		if (s[current_letter] != c && (current_letter == 0 || \
			s[current_letter - 1]))
			word++;
		current_letter++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	first_letter;
	size_t	current_letter;
	char	**dict_word;
	size_t	word;

	word = 0;
	current_letter = 0;
	if (s)
	{
		dict_word = (char**)malloc(sizeof(char*) * (ft_number_words(s, c) + 1));
		if (ft_number_words(s, c) > 0 && dict_word)
		{
			while (s[current_letter])
			{
				if (s[current_letter] && s[current_letter] != c && !first_letter)
					first_letter = current_letter;
				else if (s[current_letter] == c && first_letter)
				{
					dict_word[word] = ft_strsub(s, first_letter, current_letter - 1 - first_letter);
					// dict_word[word] = ft_memalloc(current_letter - first_letter);
					// ft_memcpy(&dict_word[word], &s[first_letter], \
					// 	current_letter - first_letter - 1);
					first_letter = 0;
					word++;
				}
				current_letter++;
			}
		}
	}
	else
		dict_word = (char **)malloc(sizeof(char*));
	dict_word[word] = (char *)malloc(sizeof(char));
	dict_word[word] = 0;
	return (dict_word);
}
