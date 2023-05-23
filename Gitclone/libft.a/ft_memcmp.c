/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:27:37 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 08:19:07 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	int				i;

	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	while (n-- > 0)
	{
		if (*(ptr + i) == *(ptr2 + i))
			i++;
		else
			return (*(ptr + i) - *(ptr2 + i));
	}
	return (0);
}
/*
#include <stdio.h>  
#include <string.h>  
int main ()  
{  
int result = 0;  
int ary1[] = {'c',7,7,11};  
int ary2[] = {'b',7,7,12,8};  
result = ft_memcmp(ary1, ary2,13);  
if(result > 0)  
{  
printf("The size of ary1 is more than the size of ary2");  
}  
else if(result < 0)  
{  
printf("The size of ary1 is less than the size of ary2");  
}  
else  
{  
printf("The size of ary1 is equal to the size of ary2");  
}  
return 0;  
}  */