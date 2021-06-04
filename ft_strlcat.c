/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afridasufi <afridasufi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:31:18 by afridasufi        #+#    #+#             */
/*   Updated: 2021/05/24 16:45:41 by afridasufi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlen(const char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return  (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
        size_t  i;
        int     j;
        size_t  dst_len;
        size_t  src_len;

        i = ft_strlen(dst);
        j = 0;
        dst_len = ft_strlen(dst);
        src_len = ft_strlen(src);
        if (dstsize < dst_len +1)
                return  (src_len + dstsize);
        if (dstsize > dst_len + 1)
        {
                while (i < dstsize - 1)
                        *(dst + i++) = *(src + j++);
                *(dst + i) = '\0';
        }
        return  (dst_len + src_len);
}
