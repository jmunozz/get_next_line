/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:41:10 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/21 18:47:42 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 10
# define RET gnl->ret
# define BUFF  gnl->buff
# define SIZE gnl->size
# define POS gnl->pos
# define FD gnl->fd

typedef struct	s_gnl
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	int				pos;
	int				fd;
	struct s_gnl	*next;
}				t_gnl;

int				get_next_line(int const fd, char **line);
void			ft_print_list(t_gnl *begin, int j);

#endif
