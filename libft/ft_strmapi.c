#include "libft.h"
/*
char	f(unsigned int i, char c)
{
	char	str;

	i = 1;
	str = c + i;
	return (str);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(int argc, char const *argv[])
{
	char str1[] = "abc";
	char *s2;
	s2 = ft_strmapi(str1, *f);
	printf("%s", s2);
	return 0;
}*/
