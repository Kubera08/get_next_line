/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:14:04 by abeaudui          #+#    #+#             */
/*   Updated: 2022/12/16 13:35:44 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

int		ft_strlen(char *str);
char 	*read_and_addtostash(char *stash, int fd);
char 	*extract_and_addtoline(char *stash);
char 	*get_next_line(int fd);
char 	*collect_andaddtostash(char *stash);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);


#endif