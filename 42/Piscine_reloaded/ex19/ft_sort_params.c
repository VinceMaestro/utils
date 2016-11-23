/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 04:03:03 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 04:06:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int		count;
	int		letter_count;

	count = 1;
	while (argc > count)
	{
		letter_count = 0;
		while ((argv[count])[letter_count])
		{
			ft_putchar((argv[count])[letter_count]);
			letter_count += 1;
		}
		ft_putchar('\n');
		count += 1;
	}
}

void	ft_swap(int a, int b, char **tab_param)
{
	char	*buffer;

	buffer = tab_param[a];
	tab_param[a] = tab_param[b];
	tab_param[b] = buffer;
}

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

int		ft_sort_params(int nbr_param, char **tab_param)
{
	int		i;
	int		smaller;
	int		index_tab_param_classified;

	index_tab_param_classified = 0;
	while (index_tab_param_classified < nbr_param)
	{
		smaller = index_tab_param_classified;
		i = index_tab_param_classified;
		while (i < nbr_param)
		{
			if (ft_strcmp(tab_param[smaller], tab_param[i]) > 0)
			{
				smaller = i;
			}
			i += 1;
		}
		ft_swap(smaller, index_tab_param_classified, tab_param);
		index_tab_param_classified += 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
