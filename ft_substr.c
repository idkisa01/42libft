/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:44:50 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/08 17:00:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen <= start)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}

/*int main ()
{
	char *s = "HelloWorld";
	unsigned int	start = 5;
	char			*newstr = ft_substr(s, start, 4);
	printf("%s\n", newstr);
	free(newstr);
	return(0);
}*/
