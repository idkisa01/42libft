/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:48:36 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/03 20:09:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == value)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
    unsigned char *result = memchr("Hola mundo", 'a', 10);
    printf("%ld\n", result ? (result - (unsigned char *)"Hola mundo") : -1);
    return 0;
}*/