/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:04:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 21:04:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		count;

	count = 0;
	while ((s1[count] != '\0') && (s2[count] != '\0'))
	{
		count += 1;
	}
	if (s1[count] != '\0')
	{
		return (1);
	}
	else if (s2[count] != '\0')
	{
		return (-1);
	}
	return (10);
}

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hellaa";

	return (ft_strcmp(s1, s2));
}

