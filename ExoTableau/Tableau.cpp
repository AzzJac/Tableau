#include <iostream>
#include "tableau.h"
using namespace std;

void Init(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		//Initialize Array
		tab[i] = 0;
	}

}

void ShowMenu()
{
	cout << "1. Remplir le tableau" << endl;
	cout << "2. Afficher le tableau" << endl;
	cout << "3. Faire la somme du tableau" << endl;
	cout << "4. Trouver le Max du tableau" << endl;
	cout << "5. Rechercher un " << char(0X82) << "l" << char(0X82) << "ment" << endl;
	cout << "6. Recherche la position d\'un " << char(0X82) << "l" << char(0X82) << "ment" << endl;
	cout << "7. Ajouter un " << char(0X82) << "l" << char(0X82) << "ment " << char(0X85) << " la fin" << endl;
	cout << "8. Ajouter un " << char(0X82) << "l" << char(0X82) << "ment " << char(0X85) << " une positon" << endl;
	cout << "9. Supprimer un " << char(0X82) << "l" << char(0X82) << "ment " << char(0X85) << " une position" << endl;
	cout << "10. Quitter" << endl;
}

void Remplir(int tab[], int nbElement)
{
	int fill(0);
	for (int i = 0; i < nbElement; i++)
	{
		cout << "entrer " << char(0X82) << "l" << char(0X82) << "ment : " << i << endl;
		cin >> fill;
		tab[i] = fill;
	}
}

void Afficher(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		cout <<"[" <<tab[i] << "] ";
	}
	cout << "\n";
}

int Somme(int tab[], int taille)
{
	int somme(0);
	for (int i = 0; i < taille; i++)
	{
		somme += tab[i];
	}
	return somme;
}

int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else {
		return b;
	}

}

int Max(int tab[], int taille)
{
	int max(tab[0]);
	for (int i = 0; i < taille; i++)
	{
		max = Max(max, tab[i]);
	}
	return max;
}

bool Recherche(int tab[],int index)
{
	if (tab[index] != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int RecherchePos(int tab[],int taille, int elem)
{
	for (int i = 0; i < taille; i++)
	{
		if (tab[i] == elem)
		{
			return i;
		}
	}
	
}

void Ajouter(int tab[],int taille, int elem)
{
	if (tab[taille - 1] == 0)
	{
		tab[taille - 1] = elem;
	}
}

void Ajouter(int tab[], int taille, int elem, int index)
{
	if (index <= taille - 1)
	{
		tab[index] = elem;
	}
	else
	{
		cout << "index entrer superieur a la longueur du tableau"<<endl;
	}
}

void Supprimer(int tab[], int index)
{
	 tab[index] = NULL;
}






