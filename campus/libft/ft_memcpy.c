/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:35:56 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 14:08:55 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	int	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// La función copia n bytes de src (origen) en dest (destino).

int	main(void)
{
	char	dest[19]="hola me llamo Alba";
	char	src[]="adios ";
	char	*temp;

	temp = ft_memcpy(dest, src, 6);
	printf("%s\n", temp);
	return (0);
}
