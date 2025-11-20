/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:21:05 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/20 10:08:21 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d = (unsigned char *)dest;
	const unsigned char	*s = (const unsigned char *)src;
	int	i;

	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return(dest);
}

// Esta función copia n bytes de src en dest, manejando
// el solapamiento entre origen y destino.

int	main(void)
{
	char	dest[20] = "Hello World!";
	char	src[] = "H";
	char	*temp;

	temp = ft_memmove(dest, src, 4);
	printf("%s\n", temp);
	return(0);
}
