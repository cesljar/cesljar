/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:29:05 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 07:29:06 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dst;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((dst = ft_calloc(sizeof(char), (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(dst + i) = (*f)(i, *(s + i));
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
