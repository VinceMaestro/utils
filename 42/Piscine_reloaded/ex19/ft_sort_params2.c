/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:43:51 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/08 00:43:53 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_params(int argc, char **stack)
{
	int arg_num;
	int letter_pos;

	arg_num = 1;
	letter_pos = 0;
	while (arg_num < argc)
	{
		while (stack[arg_num][letter_pos])
		{
			ft_putchar(stack[arg_num][letter_pos]);
			letter_pos += 1;
		}
		ft_putchar('\n');
		letter_pos = 0;
		arg_num +=1;
	}
}

//===========================

void	ft_swap_place(char *arg1, char *arg2)
{
	char	*buffer;

	printf("%s is ar2\n", arg2);
	printf("%s is arg1\n", arg1);
	buffer = arg1;
	arg1 = arg2;
	arg2 = buffer;
	printf("%s is Buffer\n", buffer);
//	printf("%s is arg1\n", arg1);
//	printf("%s is ar2\n", arg2);
}

void	ft_biggest(char *arg_stack, char *arg2)
{
	int actual_position;
	char test;
	test = *arg_stack;

//	printf("%c\n", test);

	actual_position = 0;

	while (arg_stack[actual_position] == arg2[actual_position])
	{
		actual_position += 1;
	}
	if (arg_stack[actual_position] < arg2[actual_position])
	{
		arg_stack = arg2;
	}
//	printf("%s is arg_stack\n", arg_stack);
//	printf("%s is arg2 \n", arg2);
}

void	ft_sort_params(int argc, char **argv)
{
	int	index_arg;
	int	index_stack;
	char	**stack;
	stack = argv;

	index_stack = 0;
	index_arg = 1;

	while (index_stack < argc)
	{
		while (index_arg < argc)
		{
			ft_biggest((stack[index_stack]), (argv[index_arg]));
			index_arg += 1;
		}
//		if (&stack[index_stack] != &argv[index_stack])
//		{
		ft_swap_place(stack[index_stack], argv[index_stack]);
//		}
		index_stack += 1;
		index_arg = index_stack + 1;
	}
	ft_print_params(argc, stack);
}


int main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
}
