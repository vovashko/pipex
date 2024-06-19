/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:00 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:41:04 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char src[] = "copy-shmopy";
//     char dest[10] = "hello";

//     printf("%lu\n", strlcpy(dest, src, 0));
//     printf("%s\n",dest);
//     printf("%zu\n", ft_strlcpy(dest, src, 0));
//     printf("%s\n",dest);
//     return (0);
// }