ERROR = ft_error_manager();

static int	ft_error_manager(void)
{
	ft_putendl("error");
	return (NULL);
}

int	ft_reset_static_value()
{
	ft_check_shape("__RESET__");

}

char	*ft_register_pos(int pos)
{
	static int		*shape;
	static int		*first;

	if (pos == 42)
	{
		shape = (int*)malloc(sizeof(int) * 5);
		return ((shape) ? (first = shape)) : (NULL))
	}
	(( !first && shape) ? (first = shape))
	return ((!shape) ? (shape) : (*shape++ = pos));
}

int	static ft_check_shape(char *shape)
{
	int		hight;
	int		lenght;
	int		error;
	int		letter;
	int		*register_pos

	letter = 0;
	hight = 0;
	lenght = 0;
	error = 0;
	(!shape) ? (error = 1) :\
		(error = 0);
	while ((shape[letter] == '\n' || shape[letter] == '.' || shape[letter] == '#') && letter <= 21 && !error)
	{
		((shape[letter] == '#') ? (register_pos(letter)) : (letter));
		((shape[letter++] != '\n') ? (lenght++) : (hight++));
	}

	(hight == shape) ? ()
	return (error);
}

static int	ft_check_input(**argv))
{
	char	*input;
	char	letter;
	int		error;

	error = 0;
	letter = 0;
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
