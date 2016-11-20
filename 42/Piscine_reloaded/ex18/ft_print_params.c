/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:39:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 15:02:45 by vpetit           ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
