#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"date.h"
void registreEquipment ()
{
	do{
		printf(" Equipment (entree) \n");
		printf("Nom \n", );
		scanf("%s",eqment[NE].nomE);
		printf("Date de venue :\n");
		Date (eqment[NE].dat_Entree);
		printf("Date d'entretient de l'equipment :\n");
		Date (eqment[NE].dat_Entretien);
		printf("Date de renouvellement :\n");
		Date (eqment[NE].dat_Changement);
		printf("quantite :\n");
		scanf("%d",&eqment[NE].stock);
		while(eqment[NE].stock<0)
		{
			printf("quantite inferieur a 0 reessayer:\n");
			scanf("%d",&eqment[NE].stock);
		}
		NE++;
		printf("souhaiter vous enregistre un autre equipment?\n1-oui\n2-non\n");
		int r;
	}while(r<1 || r>2);
}
