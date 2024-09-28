/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 14:02:00 by isabegar          #+#    #+#             */
/*   Updated: 2024-09-27 14:02:00 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//#include<stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i_src;

	i_src = 0;
	while (src[i_src] != '\0')
	{
		i_src++;
	}
	if (size)
	{
		i = 0;
		while (dst[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i_src);
}

/*int	main()
{
	char dst[] = "mundo";
	char src[10] = "hola";
	size_t n = 5;
	printf("%d \n",(int)ft_strlcpy(dst,src, n));
	printf("'%s' \n",dst); //esto falla
	return (0);
}*/
