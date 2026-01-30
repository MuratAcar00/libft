/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 05:58:20 by muracar           #+#    #+#             */
/*   Updated: 2026/01/27 06:02:03 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
	{
		return (0);
	}
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
#include <stdio.h>

// Senin yazdığın fonksiyonun prototipi
void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char dizi[] = "ABCDE";

	// "ABC" kısmını al, 1 adım sağa kaydır (B harfinin üzerine yapıştır)
	// Yani dizi[1]'den itibaren "ABC"yi yazmaya başla.
	ft_memmove(dizi + 1, dizi, 3);

	// Beklenen Çıktı: "AABCE"
	// Eğer memcpy kullansaydın "AAACE" gibi bozuk bir sonuç alabilirdin.
	printf("Sonuç: %s\n", dizi);

	return (0);
}