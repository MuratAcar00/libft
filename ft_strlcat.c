/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:41:31 by muracar           #+#    #+#             */
/*   Updated: 2026/02/03 11:41:31 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	while (dst[d] && d < sz)	// dst uzunluğunu sz sınırıyla ölç
	{
		d++;
	}
	while (src[s])	// src toplam uzunluğunu ölç
	{
		s++;
	}
	if (d == sz)	// Eğer sz, dst uzunluğundan küçük veya eşitse
	{
		return (sz + s);
	}
	i = 0;
	// Yer olduğu sürece (sz - 1'e kadar) kopyala
	while (src[i] && (d + i + 1) < sz)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);	// Oluşturulmak istenen toplam uzunluk
}