#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <time.h>
#include "fonctions.h"

int main()
{
	srand(time(NULL));
	int n;
	message();
	do
	{
		printf("\n\nVeulliez Saisir la Taille de la Grille (2-8) \n");
		scanf("%d",&n);
	}while(n>8 && n<2);
	jouer(n);
	printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Partie Terminé~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	return 0;
}