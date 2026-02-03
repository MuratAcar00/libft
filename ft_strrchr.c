/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:32:53 by muracar           #+#    #+#             */
/*   Updated: 2026/02/03 19:32:53 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int		i;
    char	ch;

    ch = (char)c;
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == ch)
            return ((char *)(s + i));
        i--;
    }
    return (NULL);
}