ERROR = ft_error_manager();

static int	ft_error_manager(void)
{
	ft_putchar_fd("error", 2);
	return (NULL);
}

int	static ft_check_shape(char *shape)
{
	if (shape == "RESET")
	{
		hight = 0;
		lenght = 0;
	}
	else
	{
		if (hight == 1)
			(input[letter] != '\n') ? (lenght++) : (hight++);
	}

}

static int	ft_check_input(**argv))
{
	char	*input;
	char	letter;
	int		hight;
	int		lenght;
	int		error;

	error = 0;
	hight = 1;
	lenght = 0;
	input = ft_read_file(argv[1]);
	while (input[letter] && !error)
	{
		error = ft_check_shape(&input[letter])
		letter += 21;
	}
}

char	**main(int argc, char **argv)
{
	int		error;
	char	**reslut;

	error = 0;
	((argc == 2) ? (error = ft_check_input(**argv)) : \
		(error = ERROR));
	(!error) ? (result = ft_fillit(**argv)) : \
		(result = error);
	return (result);
}
