#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: string we are to use.
 *Return: the length of the string.
 */
int check_pal(char *s, int i, int len);
int _strlen_recusion(char *s);

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *check_pal - compares each character of the string.
 *@s: string to use.
 *@i: smallest iterator.
 *@len: length id the string.
 *Return: 1 if palindromw, 0 if not.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome - detects if a string is a palindrome.
 *@s: string
 *Return: 1 if s is a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
