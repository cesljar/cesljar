/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcesljar <fcesljar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:28:20 by fcesljar          #+#    #+#             */
/*   Updated: 2023/05/23 08:41:14 by fcesljar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	char_is_separator(char c, char sep)
{
	int	i;

	i = 0;
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1], sep) == 1
				&& char_is_separator(str[i], sep) == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char sep)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], sep) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	*write_split(char **split, char *str, char sep)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
		if (char_is_separator(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], sep) == 0)
				j++;
			if ((split[word] = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
			{
				while (word > 0)
					free(split[--word]);
				return (NULL);
			}
			write_word(split[word], str + i, sep);
			i += j;
			word++;
		}
	return ((void*)1);
}

char		**ft_split(const char *s, char c)
{
	char	**res;
	char	*str;
	int		words;

	if (s == NULL)
		return (NULL);
	str = (char*)s;
	words = count_words(str, c);
	if ((res = (char**)malloc(sizeof(char*) * (words + 1))) == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == NULL)
		return (NULL);
	return (res);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "strtok needs to be called several times to split a string";
	int init_size = strlen(str);
	char delim[] = " ";

	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	/* This loop will show that there are zeroes in the str after tokenizing */
	for (int i = 0; i < init_size; i++)
	{
		printf("%d ", str[i]); /* Convert the character to integer, in this case
							   the character's ASCII equivalent */
	}
	printf("\n");

	return 0;
}