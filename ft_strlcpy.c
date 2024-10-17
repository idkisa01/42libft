/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:02:00 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/14 17:36:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i_src;

	i_src = 0;
	while (src[i_src] != '\0')
	{
		i_src++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
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
	char	s[] = "gatinha";
	char	d[20];
	int		n;

	n = ft_strlcpy(d, s, 2);
	printf("\tsrc: %s dst: %s len: %d\n\n", s, d, n);
}*/
