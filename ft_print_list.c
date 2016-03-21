/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:19:59 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/21 17:56:37 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_print_list(t_gnl *begin_list, int j)
{
	
	int i;

	i = 0;
	printf("\n++++++++++++++\n");
	if (j == 1)
	{
		while (begin_list)
		{
			printf("=[%d]=>\n", i);
			printf("fd:%d\n", begin_list->fd);
			printf("pos:%d\n", begin_list->pos);
			printf("buff:%s\n", begin_list->buff);
			begin_list = begin_list->next;
			i++;
		}
	}
	if (j == 2)
	{
		printf("fd:%d\n", begin_list->fd);
		printf("pos:%d\n", begin_list->pos);
		printf("buff:%s\n", begin_list->buff);
	}
	printf("\n++++++++++++++\n");
}
 
