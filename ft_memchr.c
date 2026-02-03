/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:41:27 by muracar           #+#    #+#             */
/*   Updated: 2026/02/03 19:41:27 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t			i;
    unsigned char	ch;
    unsigned char	*str;

    str = (unsigned char *)s;
    ch = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (str[i] == ch)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}