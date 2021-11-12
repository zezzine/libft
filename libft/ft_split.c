#include"libft.h"

int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	calculate_w(char const	*s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
			while (s[i] == c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char		**z;
	int			i;
	int			len;
	int			wordl;

	len = calculate_w(s, c);
	i = 0;
	z = (char **)malloc((len + 1) * sizeof(char *));
	if (!z)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		wordl = wordlen(s, c);
		z[i] = malloc((wordl + 1) * sizeof(char));
		if (!z[i])
			return (NULL);
		ft_strlcpy(z[i], s, wordl + 1);
		z[i][wordl] = '\0';
		s += wordl;
		i++;
	}
	z[i] = NULL;
	return (z);
}
/*
int	main()
{
	char const s[] = "//zack///is/here////";
	char *string = "      split       this for   me  !       ";
	char c = ' ';
	int i = 0;
	char **str;
	str = ft_split(string, c);
	for (; i < 6; i++)
		printf("%s\n", str[i]);
	
}*/
