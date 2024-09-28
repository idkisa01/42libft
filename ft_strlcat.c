/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 14:10:55 by isabegar          #+#    #+#             */
/*   Updated: 2024-09-27 14:10:55 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	i;

	l_dst = 0;
	while (dst[l_dst] != '\0' && l_dst < size)
		l_dst++;
	l_src = 0;
	while (src[l_src] != '\0')
		l_src++;
	if (size <= l_dst)
		return (size + l_src);
	i = 0;
	while (src[i] != '\0' && (l_dst + i) < (size - 1))
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}

/*int main()
{
    char dst[15] = "Hola ";
    const char src[] = "Mundo";
    size_t n = 10;

    size_t result = ft_strlcat(dst, src, n);

    printf("Resultado de dst: '%s'\n", dst);  // Output: 'Hola Mun'
    printf("Valor de retorno: %zu\n", result);  // Output: 10

    return 0;
}*/
