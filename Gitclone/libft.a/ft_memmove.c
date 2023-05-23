/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:27:48 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 08:24:47 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr == NULL && ptr2 == NULL)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
  
int main()
{
    char str1[] = "Geeks"; 
    char str2[] = "Quiz";
  
    puts("str1 before memmove ");
    puts(str1);
  
   
    ft_memmove(str1, str2, sizeof(str2));
  
    puts("\nstr1 after memmove ");
    puts(str1);
  
    return 0;
}*/