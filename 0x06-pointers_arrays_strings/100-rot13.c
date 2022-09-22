#include "main.h"
/**
 * rot13 - encode string in rot13
 * @s: Character to be rotated
 * Return: s(Rotated Character)
 */

char *rot13(char *s)
{
	int src[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		      'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		      'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		      'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
		      'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int rot[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		      'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		      'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
		      'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	/**
	 *src is an array holding the original alphabet
	 *rot is an array holding the rotated alphabet
	 */


	int i;/*variable to loop through rot13 array(rot)*/
	int j;/*variable to loop through the string*/

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (src[i] != '\0' && s[j] != src[i])/*loop through rot13 */
			i++;

		if (s[j] == src[i])
			s[j] = rot[i];
	}

	return (s);
}
