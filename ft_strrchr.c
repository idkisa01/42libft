/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:13:30 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 14:13:30 by marvin           ###   ########.fr       */
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

int main()
{
	printf("strrchr %s \n", ft_strrchr("Hola, mundo!", 'm'));
}