/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:06:43 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/18 22:21:38 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	start_recording_index(int n, char *str, char c)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	while (k < n)
	{
		while (str[j] && str[j] == c)
			j++;
		while (str[j] && str[j] != c)
			j++;
		k++;
	}
	return (j);
}

char	*get_word(char *str, char c, int n)
{
	int		i;
	int		j;
	int		word_len;
	char	*word;

	word_len = 0;
	j = start_recording_index(n, str, c);
	while (str[j] && str[j] == c)
		j++;
	while (str[j++] && str[j - 1] != c)
		word_len++;
	word = (char *)malloc(word_len + 1);
	if (!word)
		return (NULL);
	i = -1;
	j = j - word_len - 1;
	while (++i < word_len)
		word[i] = str[j++];
	word[i] = '\0';
	return (word);
}

int	ft_words_num(char *str, char c)
{
	int	words_num;
	int	i;

	i = 0;
	words_num = 0;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
		words_num++;
	}
	return (words_num);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		i;
	int		words_num;
	char	**words;

	str = ft_strtrim(s, &c);
	if (!str)
		return (NULL);
	words_num = ft_words_num(str, c);
	words = (char **)malloc((words_num + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = -1;
	while (++i < words_num)
		words[i] = get_word(str, c, i);
	words[i] = NULL;
	free(str);
	return (words);
}
