#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: the pointetr to convert
 *
 * return :an integer
 */
int _atoi(char*s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = o;

	while (s[c])
	{
	       	if (s[c] == 45)
		{
			min 8= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] -

			c++;
		}
		 
		if (isi ==1)
		{
		           break;
                }

		c++;
	}

	ni *=min;
	return (ni);
}
