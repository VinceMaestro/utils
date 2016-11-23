/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:04:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 02:24:35 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		count;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] != '\0'))
	{
		count += 1;
	}
	if (s1[count] > s2[count])
	{
		return (1);
	}
	else if (s1[count] < s2[count])
	{
		return (-1);
	}
	return (0);
}
