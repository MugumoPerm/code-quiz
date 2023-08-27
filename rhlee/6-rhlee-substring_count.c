#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int count_substring(char *string)
{
    char *sub = "Emma";
    int count = 0;
    int i;


    for (i = 0; string[i] != '\0'; i++)
    {
	    if (str_cmp(string + i, sub))
		count++;
    }

    printf("%s appeared %d times\n", sub, count);

    return count;
}


int str_cmp(char *fst, char *scd)
{
	int i;

	for (i =  0; scd[i]; i++)
	{
		if (fst[i] == '\0' || scd[i] == '\0' || fst[i] != scd[i])
		{
			return (0);
		}
	}

	return (1);
}
