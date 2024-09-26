/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 18:38:15 by isabegar          #+#    #+#             */
/*   Updated: 2024-09-21 18:38:15 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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
