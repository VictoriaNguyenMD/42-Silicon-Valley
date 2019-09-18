/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 23:35:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/22 20:19:42 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	char *t1;
	char *t2;

	t1 = s1;
	t2 = s2;
	if ((!(*t1)) && (*t2 == 0)) //When both empty, all match
		return (1);
	else if (*t1 == '\0') //t1 empty, t2 not empty
	{
		if (*t2 == '*') //check star bc star can match empty or string. "", **
			if (match(t1, t2 + 1)) //must have only stars so will call the function again
				return (1);
		return (0); //"", a or **a
	}
	else if (*t2 == '\0') //t2 empty, t1 not empty. Similar to above
	{
		if (*t1 == '*')
			if (match(t1 + 1, t2) == 1)
				return (1);
		return (0);
	}
	if (*t1 == '*' && *t2 == '*') //When both star, *, *a
	{
		if (match(t1, t2 + 1)) //leave the first one and move the second one. --> *, a 
			return (1);
		if (match(t1 + 1, t2)) //*a, * aka switched. if the above doesnt work
			return (1);
	}
	else if (*t1 == '*') // *, a 
	{
		if (*(t1 + 1) == *t2) //*a, aa       *a, a
		{
			if (match(t1 + 2, t2 + 1)) //0, a		0,0
				return (1);
			if (match(t1, t2 + 1)) //*a, a		*a, 0		
				return (1);
		}
		else
			return (match(t1, t2 + 1)); //*, nothing aka \0
	}
	else if (*t2 == '*') //changed so t2 is star
	{
		if (*t1 == *(t2 + 1))
		{
			if (match(t1 + 1, t2 + 2))
				return (1);
			if (match(t1 + 1, t2))
				return (1);
		}
		else if (match(t1 + 1, t2))
			return (1);
	}
	else if (*t1 == *t2) //both equal... aa=aa
		if (match(t1 + 1, t2 + 1))
			return (1);
	return (0); //aa != b
}

int main(void)
{
	char s1[] = "yeeeeeeeeeeeeeeeesss";
	char s2[] = "a*";
	printf("%d\n", match(s1, s2));
}
