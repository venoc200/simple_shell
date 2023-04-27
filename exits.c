#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string to be copied to
 * @src: the source string
 * @n: the amount of characters to be copied
 * Return: the concatenated string
 */

char *_strncpy(char *dest, char *src, int s)
{
	int s, m;
	char *t = dest;

	s = 0;
	while (src[s] != '\0' && i < t - 1)
	{
		dest[s] = src[s];
		s++;
	}
		if (s < t)
	{
	m = s;
		while (m < t)
																{
																	dest[j] = '\0';														t++;													}
	}
		return (s);
}

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the amount of bytes to be maximally used
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
																j++;
																}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * _strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	do {
	if (*s == c)
	return (s);
	}
       	while (*s++ != '\0');

	return (NULL);
}
