#include "main.h"

/**
 * cap_string - capitalizes
 * all words of a string
 * @s: string to convert
 * Return: converted string
 */

char *cap_string(char *s)
{
	int i = 1, j;
	char delimiters[] = ",;.!?\"(){}\t\n ";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			for (j = 0; delimiters[j] != '\0'; j++)
			{
				if (s[i - 1] == delimiters[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	i++;
	}
	return (s);
}
