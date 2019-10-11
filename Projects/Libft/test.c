/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:51:07 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/19 19:39:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Test Code for tolower
*/

#ifdef tolower
int	main(void)
{
	printf("tolower: a -> %c\n", ft_tolower('a'));
	printf("tolower: a -> %c\n", ft_tolower('a'));
	printf("tolower: a -> %c\n", ft_tolower(65));
	printf("tolower: 1 -> %c\n", ft_tolower('1'));
	printf("tolower: 0 -> %c\n", ft_tolower(48));
	return (1);
}
#endif

/*
** Test Code for toupper
*/

#ifdef toupper
int	main(void)
{
	printf("toupper: A -> %c\n", ft_toupper('a'));
	printf("toupper: A -> %c\n", ft_toupper('a'));
	printf("toupper: A -> %c\n", ft_toupper(65));
	printf("toupper: 1 -> %c\n", ft_toupper('1'));
	printf("toupper: 0 -> %c\n", ft_toupper(48));
	return (1);
}
#endif

/*
** Test Code for strnstr
*/

#ifdef strnstr
int main(void) {
  const char *largestring = "Foo Bar Baz\0";
  const char *smallstring = "Bard\0";
  char *ptr;
  size_t a = (size_t)5;
  ptr = ft_strnstr(largestring, smallstring, a);
  printf("%s", ptr);
  return 0;
}
#endif

/*
** Test Code for strstr
*/

#ifdef strnstr
int main(void) {
  const char *largestring = "Foo Bar Baz\0";
  const char *smallstring = "Bard\0";
  char *ptr;
  ptr = ft_strstr(largestring, smallstring);
  printf("%s", ptr);
  return 0;
}
#endif


/*
** Test Code for strrchr
*/

#ifdef strrchr
int main(void) {
  const char *largestring = "Foo Bar Baz\0";
  const char *smallstring = "Bar\0";
  char *ptr;
  ptr = ft_strrchr(largestring, 'o');
  printf("%s", ptr);
  return 0;
}
#endif

/*
** Test Code for strcat
*/

#ifdef strcat
int main(void) {
  char largestring[10] = "Foaao";
  char smallstring[4]= "Bar";

  char *s;
  s = ft_strcat(largestring, smallstring);
  printf("%s", s);
  return 0;
}
#endif

/*
** Test Code for strncat
*/

#ifdef strncat
int main(void) {
  char largestring[15] = "Foaao";
  char smallstring[6]= "Baraa";

  char *s;
  s = ft_strncat(largestring, smallstring, 2);
  printf("%s", s);
  return 0;
}
#endif

/*
** Test Code for strcpy
*/

#ifdef strncat
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = (char*)malloc(10);
	str1 = ft_strcpy(str1, "World");
	printf("%s", str1);
	return (0);
}
#endif

#ifdef memcpy
int	main(void) {
	char dst[20];
	char src[5] = "noon";
	unsigned char *out;

	out = ft_memcpy(dst, src, 30);
	printf("%s", out);
	return (0);
}
#endif

#ifdef memchr
int main(void) {
	char dst[20] = "Hello";
	char src = 'l';
	unsigned char* out;

	out = ft_memchr(dst, src, 10);
	printf("%s\n%p", out, out);
	return (0);

}
#endif

#ifdef strequ
int main(void) {
	char a[10] = "Hello";
	char b[10] = "Hello";
	printf("%d", ft_strequ(a, b));
	return (0);
}
#endif

#ifdef strnequ
int main(void) {
	char a[10] = "Hello";
	char b[10] = "Helloa";
	printf("%d", ft_strnequ(a, b, 10));
	return (0);
}
#endif

#ifdef strsub
int main(void) {
	char a[15] = "AB";
	char b[10] = "Helloa";
	printf("%s", ft_strsub(a, 1, 3));
	return (0);
}
#endif

#ifdef putnbr
int main(void) {
	ft_putnbr(-321);
	return (0);
}
#endif

#ifdef strsplit
int main(void) {
	char **arr = ft_strsplit("*hello*fellow***students*", '*');
	while(*arr)
	{
		printf("%s", *arr);
		arr++;
	}
	return (0);
}
#endif

#ifdef itoa
int main(void) {
	printf("%s", ft_itoa(2147483647));
	return (0);
}
#endif
