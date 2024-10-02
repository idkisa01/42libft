/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:50:17 by isabegar          #+#    #+#             */
/*   Updated: 2024-10-02 09:50:17 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(char *s, int c)
{
	int	longer;

	longer = 0;
	while (s[longer] != '\0')
		longer++;
	while (longer--)
	{
		if (s[longer] == c)
			return (s + longer);
	}
	return (NULL);
}

/*int main()
{
	printf("strrchr %s \n", ft_strrchr("Hola, mundo!", 'm'));
}*/