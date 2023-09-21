#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string{string characters}.
 * Return: str.
*/

char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int counter;

	/*itrate through string*/
	while (*ptr != '\0')
	{
		/*iterate through letters*/
		for (counter = 0; letters[counter] != '\0'; counter++)
		{
			/*check if string == letter*/
			if (*ptr == letters[counter])
			{
				/*replace string with coresponding number possitions*/
				/*given that the letters and numers index are directly*/
				/*into proportion*/
				*ptr = leet[counter];
			}
		}
		ptr++;
	}
	return (str);
}
