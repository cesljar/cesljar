/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:25:55 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 07:39:08 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = -1;
	if (n > 0)
	{
		while ((size_t)++i < n)
		{
			*(unsigned char*)(s + i) = '\0';
		}
	}
}

/* #include <stdlib.h>
#include <string.h>

int main( void )
  {
    char buffer[80];

    bzero( buffer, 80 );
    return EXIT_SUCCESS;
  }*/