/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:30 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:41:30 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (haystack[a + b] != '\0' && haystack[a + b] == needle[b] && a
			+ b < len && needle[b] != '\0')
		{
			if (needle[b + 1] == '\0' && b <= len)
				return ((char *)&haystack[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}

// int main(void)
// {
//     char str[] = "I am trying out this thingy out wish me luck!";
//     char to_find[] = "out";

//     printf ("%s\n", ft_strnstr(str, to_find, 15));
//     printf ("%s\n", strnstr(str, to_find, 15));
//     return (0);
// }