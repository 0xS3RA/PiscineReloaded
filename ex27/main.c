
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1024];
	ssize_t	read_bytes;

	if (argc == 1)
		return (write(1, "File name missing.\n", 19), 0);
	else if (argc > 2)
		return (write(1, "Too many arguments.\n", 20), 0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (write(1, "Cannot read file.\n", 18), 0);
	read_bytes = read(fd, buffer, sizeof(buffer));
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (0);
}
