/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 19:15:31 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/21 17:49:01 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	int	fd;
	int fd2;
	int	ret;
	char *line;

	line = NULL;
	if (ac == 3)
	{
			fd = open(av[1], O_RDONLY);
			fd2 = open(av[2], O_RDONLY);
			printf("------MAIN-----\nfd1:%d\nfd2:%d\n", fd, fd2);
			ret = get_next_line(fd, &line);
			printf("return:%d\n", ret);
			printf("line:%s\n", line);
			ret = get_next_line(fd2, &line);
			printf("return:%d\n", ret);
			printf("line:%s\n", line);
			ret = get_next_line(fd, &line);
			printf("return:%d\n", ret);
			printf("line:%s\n", line);
			ret = get_next_line(fd2, &line);
			printf("return:%d\n", ret);
			printf("line:%s\n", line);
			close (fd);
			close(fd2);
	}
	return (0);
}
