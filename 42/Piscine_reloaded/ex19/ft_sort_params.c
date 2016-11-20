/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:43:51 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 15:03:21 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_swap(int general_index, char **argv)
{
	char	*buffer;

	buffer = argv[general_index];
	argv[general_index] = argv[general_index - 1];
	argv[general_index - 1] = buffer;
}

int		ft_compare(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i])
	{
		i += 1;
	}
	if (str1[i] > str2[i])
	{
		return (1);
	}
	return (0);
}

int		ft_biggest(int general_index, char **argv)
{
	if (ft_compare(argv[general_index], argv[general_index - 1]) == 1)
	{
		ft_swap(general_index, argv);
		if (argv[general_index + 1])
		{
			ft_biggest(general_index + 1, argv);
		}
	}
	if (general_index > 1)
	{
		ft_biggest(general_index - 1, argv);
	}
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	char	return_chariot;
	int		letter_pos;

	return_chariot = '\n';
	letter_pos = 0;
	argc -= 1;
	ft_biggest(argc, argv);
	argc -= 1;
	while (argc >= 0)
	{
		while (argv[argc][letter_pos])
		{
			ft_putchar(argv[argc][letter_pos]);
			letter_pos += 1;
		}
		letter_pos = 0;
		ft_putchar(return_chariot);
		argc -= 1;
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
}
