ERROR = ft_error_manager();

static int	ft_error_manager(void)
{
	ft_putchar_fd("error", 2);
	return (NULL);
}

int	ft_reset_static_value()
{
	ft_check_shape("__RESET__");

}

int	static ft_check_shape(char *shape)
{
	int		hight;
	int		lenght;
	int		error;
	int		letter;

	letter = 0;
	hight = 0;
	lenght = 0;
	error = 0;
	(!shape) ? (error = 1) :\
		(error = 0);
	while ((shape[letter] == '\n' || shape[letter] == '.' || shape[letter] == '#') && letter <= 21 && !error)
		(shape[letter++] != '\n') ? (lenght++) : (hight++);
	(hight == shape) ? ()
	return (error);
}

static int	ft_check_input(**argv))
{
	char	*input;
	char	letter;
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
