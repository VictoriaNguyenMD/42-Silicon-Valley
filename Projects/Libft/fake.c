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

/* char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
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
} */
/*
int main(void) {
  char largestring[15] = "Foaao";
  char smallstring[6]= "Ba";

  size_t s;
  s = strlcat(largestring, smallstring, 4);
  printf("%zd", s);
  return 0;
}
 */

/* size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(*s)
	{
		i++;
		s++;
	}
	return i;
}

int	main(void)
{
	size_t val;

	val = ft_strlen("World");
	printf("%zd", val);
	return (0);
}
 */


// void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
// {
// 	size_t i;
// 	unsigned char *cdst;
// 	unsigned char *csrc;

// 	cdst = (unsigned char*)dst;
// 	csrc = (unsigned char*)src;
// 	i = 0;
// 	while (i < n && csrc[i] != '\0')
// 	{
// 		cdst[i] = csrc[i];
// 		i++;
// 	}
// 	return cdst;
// }

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*ucs;
// 	size_t			i;

// 	ucs = (unsigned char*)s;
// 	i = 0;
// 	while (i < n && ucs[i])
// 	{
// 		if (ucs[i] == (unsigned char)c)
// 			return ((unsigned char*)&ucs[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char	*cdst;
// 	unsigned char	*csrc;
// 	size_t			i;

// 	cdst = (unsigned char*)dst;
// 	csrc = (unsigned int *)src;
// 	i = 0;
// 	printf("\n");
// 	for(int i = 0; i < 5; i++)
//     	printf("%d ", cdst[i]);
// 	// if (cdst <= csrc)
// 	// {
// 	// 	while (csrc[i] && i < len)
// 	// 	{
// 	// 		cdst[i] = csrc[i];
// 	// 		printf("%d, %zu, %zu", cdst[i], i, len);
// 	// 		i++;
// 	// 	}
// 	// 	// for(int i = 0; i < 5; i++)
//     // 	// 	printf("%d ", cdst[i]);
// 	// }
// 	// else
// 	// {
// 	// 	while (len > 0)
// 	// 	{
// 	// 		len--;
// 	// 		cdst[len] = csrc[len];
// 	// 	}
// 	// }
// 	return (cdst);
// }

#include <unistd.h>

// void	ft_putnbr(int n)
// {
// 	int out;
// 	long lnum = (long)n;

// 	if (lnum < 0)
// 	{
// 		write(1, "-", 1);
// 		lnum *= -1;
// 	}
// 	if (lnum == 0)
// 		write(1, "0", 1);
// 	if (lnum == 0)
// 	{
// 		return ;
// 	}
// 	else
// 	{
// 		ft_putnbr(lnum/ 10);
// 		out = lnum % 10 + '0';
// 		write(1, &out, 1);
// 	}
// }

// int	ft_countwords (char *s, char dl)
// {
// 	int count;
// 	int start;

// 	count = 0;
// 	start = 0;
// 	while (s && *s)
// 	{
// 		if (*s == dl)
// 		{
// 			s++;
// 		}
// 		else
// 		{
// 			count++;
// 			while (*s && *s != dl)
// 			{
// 				s++;
// 			}
// 		}
// 	}
// 	return (count);
// }



int main(void) {
	ft_strsplit("*hello*fellow***students*", '*');
	return (0);
}
