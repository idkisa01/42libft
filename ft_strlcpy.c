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

#include<stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	i = 0;
	l_src = 0;
	if (!dst || !src)
	{
		return (0);
	}
	while (src[l_src] != '\0')
	{
		l_src++;
	}

	if (size > 0)
	{
		while (i < size -1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}

	return l_src;

}

int	main()
{
	char dst[20];
	char src[] = "hola mundo";
	size_t n = 20;
	printf("%d \n",(int)ft_strlcpy(dst,src, n));
	printf("<%s> \n",dst);
	return (0);
}

