#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *b;

	i = 0;
	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		size1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		size2++;
	}

	b = malloc(sizeof(char) * (size1 + size2 + 1));
	if (b == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		b[i] = s1[i];
	}

	for (i = 0; i < size2; i++)
	{
		b[i + size1] = s2[i];
	}
	b[i + size1] = '\0';
	return (b);
}
