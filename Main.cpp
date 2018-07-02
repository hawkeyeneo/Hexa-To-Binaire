#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream monFlux("Conversion.txt", ios::out | ios::app);
	int CarcatRetour = 0;
	int caractconv = 0;

	if (monFlux)
	{
		int tailleconv = 0;
		cout << "Combien ya t'il de caractere ?" << endl;
		cin >> tailleconv;

		for (int compteur = 1; compteur <= tailleconv ; compteur++)
		{
			ofstream monFlux("Conversion.txt", ios::out | ios::app);
			cout << "Entree le caractere" << endl;
			cout << "A = 65  B = 66 C = 67" << endl;
			cout << "D = 68  E = 69 F = 70" << endl;
			cin >> CarcatRetour;


			switch (CarcatRetour)
			{
			case 0:
				monFlux << "0000\t";
				break;
			case 1:
				monFlux << "0001\t";
				break;
			case 2:
				monFlux << "0010\t";
				break;
			case 3:
				monFlux << "0011\t";
				break;
			case 4:
				monFlux << "0100\t";
				break;
			case 5:
				monFlux << "0101\t";
				break;
			case 6:
				monFlux << "0110\t";
				break;
			case 7:
				monFlux << "0111\t";
				break;
			case 8:
				monFlux << "1000\t";
				break;
			case 9:
				monFlux << "1001\t";
				break;
			case 65:
				monFlux << "1010\t"; // A
				break;
			case 66:
				monFlux << "1011\t"; // B
				break;
			case 67:
				monFlux << "1100\t"; // C
				break;
			case 68:
				monFlux << "1101\t"; // D
				break;
			case 69:
				monFlux << "1110\t"; // E
				break;
			case 70:
				monFlux << "1111\t"; // F
				break;
			default:
				cout << "Veuiller faire un choix" << endl;
				break;
			}
			monFlux.close();

		}
	
	}
	else
	{
		cout << "ERREUR OUVERTURE DU FICHIER IMPOSSIBLE !!" << endl;
	}
}