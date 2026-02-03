/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:54 by muracar           #+#    #+#             */
/*   Updated: 2026/02/03 19:45:54 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)(haystack + i));
            j++;
        }
        i++;
    }
    return (NULL);
}