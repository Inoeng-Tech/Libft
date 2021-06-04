/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:34:12 by afridasufi        #+#    #+#             */
/*   Updated: 2021/05/23 15:09:48 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5000
#endif

#ifndef OPEN_MAX
# define OPEN_MAX 32
#endif

typedef struct          s_list
{
        void            *content;
        size_t          content_size;
        struct s_list   *next;
}                               t_list;

void            *ftmemset(void*b, int c, size_t len);
void            ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dst, const void *src, size_t n);
void            *ft_memccpy(void *dst, const void *src, int c, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);
int             ft_strlen(const char *s);
size_t          ft_strlcpy(char *dst, const char *src, size_t dstsize);
#endif