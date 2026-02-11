
#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort(char **str, int charSize)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < charSize)
	{
		j = i + 1;
		while (j < charSize)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
		return (0);
	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
