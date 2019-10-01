#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i = 0;
	size_t j = 0;
	size_t len;
	while (dst[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0'))
	{
		len = i + j;
		if((len) > dstsize)
		{
			return ((len) - 1);
		}
		dst[(len)] = src[j];
		j++;
	}
	if (dstsize != 0)
	{
		dst[(len)] = '\0';
	}
	return ((len));
} */

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}


/* char	*ft_strcat(char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
} */

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return s1;
}

int main(void) {
  char largestring[15] = "Foaao";
  char smallstring[6]= "Baraa";

  char *s;
  s = ft_strncat(largestring, smallstring, 2);
  printf("%s", s);
  return 0;
}
