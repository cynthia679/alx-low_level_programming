#include "main.h"

/**
 *_isalpha - checks for alphabetical order
 *@c: the character to be checked
 *Return: 1 for alphabetical order or 0 for anything else
 */
int _isalpha(int x)

{
      	if ((x >= && x <= 90) || (x >= 97 && x <=122))
	{
		return (1);
	}
	return (0);
}
