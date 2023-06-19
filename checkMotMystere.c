#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "structure_mot_mystere.h"



bool checkChara(char c, struct MysteryWord* word, char* censoredWord)
{
	bool isFound = false;

	for (int i = 0; i < word->lengthWords; i++)
	{
		if (word->word[i] == c)
		{
			isFound = true;
			censoredWord[i] = word->word[i];
		}
	}

	return isFound;
}
