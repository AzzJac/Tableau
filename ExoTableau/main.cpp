#include <iostream>
#include"tableau.h"

using namespace std;

int main() {

	//déclaration du tableau

	int const taille(10);
	int tab[taille];
	int somme(0);
	int max(0);
	int pos(0);
	bool search(true);


	int choix(0);
	int lelem(0);

	//appel la fonction init qui initialise la fonction avec des 0
	Init(tab, taille);

	//boucle tant que != 10
	while (choix != 10)
	{
		//affiche le menu
		ShowMenu();
		cin >> choix;
		int elem(0);
		switch (choix)
		{
		case(1):
			cout << "Combien d\'" << char(0X82) << "l" << char(0X82) << "ment" << endl;
			cin >> elem;
			Remplir(tab,elem);
			break;

		case(2):
			Afficher(tab, taille);
			break;

		case(3):
			somme = Somme(tab, taille);
			cout << somme << endl;
			break;
		case(4):
			max = Max(tab, taille);
			cout << "Valeur Max de l\'array " << max << endl;
			break;
		case(5):
			cout << "index de l\'array rechercher ? " << endl;
			cin >> choix;
			search = Recherche(tab, choix);
			if (search)
			{
				cout << "element existant"<<endl;
			}
			else 
			{
				cout << "element non existant"<<endl;
			}
			break;
		case(6):
			cout << "element a chercher ? " << endl;
			cin >> choix;
			pos = RecherchePos(tab, taille, choix);
			cout << "position de l\'element : " << pos << endl;
			break;
		case(7):
			cout << "valeur a mettre a la fin ? " << endl;
			cin >> choix;
			Ajouter(tab, taille, choix);
			break;
		case(8):
			cout << "index ou insérer valeur ? " << endl;
			cin >> choix;
			cout << "\n" << "valeur a inserer ? " << endl;
			cin >> lelem;
			Ajouter(tab, taille, lelem, choix);
			break;
		case(9):
			cout << "index ou insérer valeur ? " << endl;
			cin >> choix;
			Supprimer(tab, choix);
			break;
		default:
			break;
		}

	}
	return 0;
}
