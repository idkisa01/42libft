/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:54:26 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/06 18:26:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	ptr_d = (unsigned char *)dest;
	ptr_s = (const unsigned char *)src;
	if (!ptr_d && !ptr_s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dest);
}

/*int main (void)
{
	char ptr_d[20];
	char ptr_s[] = "holamundo";
	size_t n = 3;
	ft_memcpy(ptr_d, ptr_s, n);
	ptr_d[n] = '\0';
	printf("%s\n" , ptr_d);
}*/