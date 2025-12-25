/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:30:59 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/11 11:21:31 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
