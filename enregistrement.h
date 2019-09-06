typedef struct infoPerso infoPerso;
struct infoEquipe
{
	char nom[10];
	int N_effectif;
	char tache[10];
	planning plann;//
	equipment eqment[25];
};
void registreDivision(infoEquipe reg[6]);
