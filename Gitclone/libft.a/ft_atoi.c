/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:21:42 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 07:35:19 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
static int	get_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	get_isnb(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				ntmp;
	unsigned long	n;
	unsigned long	limit;
	int				mult;

	n = 0;
	i = 0;
	limit = (unsigned long)(FT_MAX_L / 10);
	mult = 1;
	while (get_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			mult = -1;
	while ((ntmp = get_isnb(str[i++])) != -1)
	{
		if (mult == 1 && (n > limit || (n == limit && ntmp > 7)))
			return (-1);
		else if (mult == -1 && (n > limit || (n == limit && ntmp > 8)))
			return (0);
		n = n * 10 + ntmp;
	}
	return (n * mult);
}
/*
int main(void)
{
    printf("Real atoi: %d\n", atoi("-999999999999999"));
    printf("My atoi: %d\n", ft_atoi("-999999999999999"));
    return 0;
}*/