//but:�crivez un programme qui demande un entier comme nombre de d�part, un second entier comme nombre de fin.
//Le troisi�me nombre indique le bond c�est - � - dire de combien le nombre de d�part doit �tre augment� ou diminu�
//pour afficher le second nombre.
//Le programme v�rifie que le bond est positif si le nombre du d�part est plus petit que le nombre de fin et vis - versa.
//Le programme redemande le bond tant que la r�gle n�est pas respect�e.
//Le programme affiche les nombres compris dans la fourchette en les augmentant ou diminuant du bond en les
//s�parant par un espace

//Auteur: Ali Chamseddine
//Date: 2020-10-13


#include <iostream>				// Int�gre un coffre � outils (cout, cin, ...) pour parler avec l'utilisateur

using namespace std;  // Pour �viter de marqer std dans les instructions

int main()
{			

	// Pour g�rer les caract�res accentu�s
	setlocale(LC_ALL, "");

	//D�claration des variables
	int entier1;       //Entier de d�part
	int entier2;       // Entier de fin
	int entier3;        // Bond 

	//Demander � l'utilisateur de rentrer la valeur de d�part
    std::cout << "Veuillez entrer le nombre de d�part:";
	std::cin >> entier1;

	//Demander � l'utilisateur de rentrer la valeur de fin
	std::cout << "Veuillez entrer le nombre de fin :";
	std::cin >> entier2;

	//Demander � l'utilisateur de rentrer le nombre de bon 
	std::cout << "Veuillez entrer le nombre de bond:";
	std::cin >> entier3;

    if (entier1 > entier2)
	{
		std::cout << "Vous �tes au nombre de d�part:" << entier1 << entier2 << endl;
		for (int i = entier1 + 1; i <=entier2; i++)
		{
			std::cout << "Vous �tes au:" << i << endl;
		}
	}
	else
	{
		std::cout << "Vous �tes au nombre de d�part " << entier1 << " et vous arriver au nombre de fin " << entier2 << endl;
		for (int i = entier1 - 1; i >= entier2; i--)
		{
			std::cout << "Vous arriver au nombre de fin: " << i << endl;
		}
	}
	std:: cout << "Votre nombre:" << endl; 


	 return 0;
}
