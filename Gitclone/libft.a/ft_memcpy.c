/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:27:43 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 08:22:29 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
 
int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "Qui2z"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  
  ft_memcpy (str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
} */