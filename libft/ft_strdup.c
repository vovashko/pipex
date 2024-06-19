/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:40:31 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:40:32 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupl;
	int		ld;
	int		ls;

	ls = 0;
	while (s1[ls] != '\0')
		ls++;
	dupl = (char *)malloc(ls + 1);
	if (!dupl)
		return (NULL);
	ld = 0;
	while (ld < ls)
	{
		dupl[ld] = s1[ld];
		ld++;
	}
	dupl[ld] = '\0';
	return (dupl);
}

// int main(void)
// {
//     char *text;
//     text = "hello!";

//     printf("%s\n", strdup(text));
//     printf("%s\n", ft_strdup(text));
//     return(0);
// }