#include "libft.h"

static int	countwords(const char *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if (s[i] != c && (i > 0 && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	lenwords(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		mot;
	int		caractere;
	int		i;

	if (!s)
		return (0);
	mot = countwords((char *)s, c);
	tab = malloc(sizeof(char *) * (mot + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < mot)
	{
		caractere = 0;
		while (*s != '\0' && *s == c)
			s++;
		caractere = lenwords((char *)s, c);
		tab[i] = ft_substr(s, 0, caractere);
		while (*s != '\0' && *s != c)
			s++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
