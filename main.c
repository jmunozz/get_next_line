/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 19:15:31 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/21 14:27:46 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	int	fd;
	int	ret;
	char *line;

	line = NULL;
	if (ac == 2)
	{
			fd = open(av[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) != 0)
			{
				printf("return:%d\n", ret);
				printf("line:%s\n", line);
			}
	//	printf("line:%s\n", line);
		close (fd);
	}
	return (0);
}
