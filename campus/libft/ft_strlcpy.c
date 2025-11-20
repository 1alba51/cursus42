/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:12:18 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/20 10:45:57 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	int	i;

	i = 0;
	while (i < size && s[i])
	{
		d[i] = s[i];
		i++;
	}
	while (i < size)
	{
		d[i] = '\0';
		i++;
	}
}

// Esta función copia una cadena dentro de otra con límite de tamaño,
// garantizando el '\0' (size - 1).

int	main(void)
{
	char	src[20] = "Hello Wolrd!";
	char	dst[30];

	ft_strlcpy(dst, src, 4);
	printf("%s\n", dst);
	return(0);
}
