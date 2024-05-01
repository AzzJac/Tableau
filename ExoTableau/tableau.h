#ifndef TABLEAU_H_HEADER
#define TABLEAU_H_HEADER

void Init(int tab[], int taille);
void ShowMenu();
void Remplir(int tab[],int nbElement);
void Afficher(int tab[], int taille);
int Somme(int tab[], int taille);
int Max(int a, int b);
int Max(int tab[], int taille);
bool Recherche(int tab[],int index);
int RecherchePos(int tab[],int taille, int elem);
void Ajouter(int tab[],int taille, int elem);
void Ajouter(int tab[], int taille, int elem, int index);
void Supprimer(int tab[], int index);

#endif // !TABLEAU_H_HEADER
