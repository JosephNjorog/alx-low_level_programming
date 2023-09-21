#include "main.h"

/**
 * cap_string - capitalizes first letter of every word in a string.
 *				starting from the first word, and every word with,
 *				a separator before it.
 * @str: string to capitalize.
 * Return: str.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int marker = 1;

	while (*ptr != '\0')
	{
		/*chaeck if small letter*/
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/*marker to look to signal capitalization*/
			if (marker)
			{
				/*check if current leter is current letter of word*/
				/*check if it follows a separator && not capitalized*/
				if (ptr == str || separator(*(ptr - 1)))
				{
					/*capitalize by Ascii arithmetics*/
					*ptr = *ptr + ('A' - 'a');
				}
			}
			/*reset marker back to 0*/
			marker = 0;
		}
		else if (separator(*ptr))
		{
			/*marker is always set to 0ne*/
			/*coz separater is found*/
			/*anticipating next letter*/
			marker = 1;
		}
		ptr++;
	}
	return (str);
}

/**
 * separator - check if char is a separator.
 * @s: argument for character to check.
 * Return: 1 when char is reparator.
 *			0 when isn't.
*/
int separator(char s)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int counter;

	for (counter = 0; separators[counter] != '\0'; counter++)
	{
		if (s == separators[counter])
		{
			return (1);
		}
	}
	return (0);
}
