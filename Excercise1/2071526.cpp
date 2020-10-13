//but:Écrivez un programme qui demande un entier comme nombre de départ, un second entier comme nombre de fin.
//Le troisième nombre indique le bond c’est - à - dire de combien le nombre de départ doit être augmenté ou diminué
//pour afficher le second nombre.
//Le programme vérifie que le bond est positif si le nombre du départ est plus petit que le nombre de fin et vis - versa.
//Le programme redemande le bond tant que la règle n’est pas respectée.
//Le programme affiche les nombres compris dans la fourchette en les augmentant ou diminuant du bond en les
//séparant par un espace

//Auteur: Ali Chamseddine
//Date: 2020-10-13


#include <iostream>				// Intègre un coffre à outils (cout, cin, ...) pour parler avec l'utilisateur

using namespace std;  // Pour éviter de marqer std dans les instructions

int main()
{			

	// Pour gérer les caractères accentués
	setlocale(LC_ALL, "");

	//Déclaration des variables
	int entier1;       //Entier de départ
	int entier2;       // Entier de fin
	int entier3;        // Bond 

	//Demander à l'utilisateur de rentrer la valeur de départ
    std::cout << "Veuillez entrer le nombre de départ:";
	std::cin >> entier1;

	//Demander à l'utilisateur de rentrer la valeur de fin
	std::cout << "Veuillez entrer le nombre de fin :";
	std::cin >> entier2;

	//Demander à l'utilisateur de rentrer le nombre de bon 
	std::cout << "Veuillez entrer le nombre de bond:";
	std::cin >> entier3;

    if (entier1 > entier2)
	{
		std::cout << "Vous êtes au nombre de départ:" << entier1 << entier2 << endl;
		for (int i = entier1 + 1; i <=entier2; i++)
		{
			std::cout << "Vous êtes au:" << i << endl;
		}
	}
	else
	{
		std::cout << "Vous êtes au nombre de départ " << entier1 << " et vous arriver au nombre de fin " << entier2 << endl;
		for (int i = entier1 - 1; i >= entier2; i--)
		{
			std::cout << "Vous arriver au nombre de fin: " << i << endl;
		}
	}
	std:: cout << "Votre nombre:" << endl; 


	 return 0;
}
