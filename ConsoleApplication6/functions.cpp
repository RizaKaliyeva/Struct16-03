#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Footbol.h"


void footbol(struct Footbol * team, int player)
{
	struct Footbol best;
	int max = 0;
	for (int i = 0; i < player; i++)
	{
		if (team[i].count_gol > max)
		{
			max = team[i].count_gol;
			best = team[i];
		}
	}
	printf("Luchshiy forward %s, kol-vo golov %d\n", best.lname, best.count_gol);
}