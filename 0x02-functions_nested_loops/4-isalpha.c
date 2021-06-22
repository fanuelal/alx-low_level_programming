#include "holberton.h"

/**
 * _isalpha - checks for lowercase character and also fo upercase
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'));
}
