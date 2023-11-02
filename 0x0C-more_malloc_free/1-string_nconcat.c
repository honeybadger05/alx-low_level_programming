#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	size1 = 0;
	size2 = 0;
	while (s2[size2] != '\0')
		size2++;
	while (s1[size1] != '\0')
		size1++;

	if (n >= size2)
		n = size2;

	s = malloc(sizeof(char) * n + size1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + size1] = s2[i];

	s[i + size1] = '\0';

	return (s);
}
