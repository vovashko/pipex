/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:51 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/20 16:09:59 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (s == NULL || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (start + len < ft_strlen(s))
		sub = (char *)malloc(len + 1);
	else
		sub = (char *)malloc(ft_strlen(s) - start + 1);
	if (!sub)
		return (NULL);
	i = 0;
	j = start + i;
	while (i < len && s[j] != '\0')
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main (void)
// {
//     printf("%s\n", ft_substr("hello can you hear me?", 0, 10000));
//     printf("%lu\n", strlen(ft_substr("hello can you hear me?", 0, 10000)));
//     return (0);
// }