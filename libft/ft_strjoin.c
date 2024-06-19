/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:40:41 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/23 12:29:57 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*hold;
	int		is1;
	int		is2;
	int		ih;

	hold = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!hold)
		return (NULL);
	is1 = 0;
	is2 = 0;
	ih = 0;
	while (s1[is1] != '\0')
	{
		hold[ih] = s1[is1];
		ih++;
		is1++;
	}
	while (s2[is2] != '\0')
	{
		hold[ih] = s2[is2];
		ih++;
		is2++;
	}
	hold[ih] = '\0';
	return (hold);
}

// int main (void)
// {
//     printf("%s\n", ft_strjoin("hello can", "you hear me?"));
//     return (0);
// }