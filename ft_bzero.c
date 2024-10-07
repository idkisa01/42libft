/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:38:15 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/05 20:33:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '0';
		ptr++;
		n--;
	}
}

/*int main(void)
{
	char buffer[11] = "Helloworld";
	ft_bzero(buffer, 5);
	printf("<%s>\n", buffer);
	return (0);
}*/
