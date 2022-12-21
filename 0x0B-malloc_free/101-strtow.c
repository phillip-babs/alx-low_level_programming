#include "main.h"
#include <stdlib.h>

/**
 * strtow - convert a string into a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */

char **strtow(char *str)
{
	int wc, wordlen, getfirstchar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	if (len == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		getfirstchar = wordcounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstchar++;
		else if (str[0] == ' ')
			getfirstchar++;
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfirstchar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
