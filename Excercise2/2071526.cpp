//but:Une soci�t� de vente de mat�riel informatique r�mun�re ses repr�sentants commerciaux � la commission. Les
//repr�sentants re�oivent 299 $ par semaine plus un pourcentage selon le secteur o� est affect� le repr�sentant :
//� 5.5 % de leurs ventes brutes par semaine si le repr�sentant est au secteur i ou I pour Imprimante,
//� 7.5 % de leurs ventes brutes par semaine si le repr�sentant est au secteur O ou o pour Ordinateur,
//� 9.5 % de leurs ventes brutes par semaine si le repr�sentant est au secteur T ou t pour T�l�phone ou Tablette,
//De plus, un pourcentage est retenu sur le salaire pour payer les imp�ts.
//� 15 % si le salaire par semaine est inf�rieur � 700 $
//� 20 % si le salaire par semaine est compris entre 700 $

//Auteur:Ali Chamseddine
//Date: 2020-10-13



#include <iostream>				// Int�gre un coffre � outils (cout, cin, ...) pour parler avec l'utilisateur

using namespace std;  // Pour �viter de marqer std dans les instructions

int main()
{

	// Pour g�rer les caract�res accentu�s
	setlocale(LC_ALL, "");

	//Premi�re lecture de l'�nonc�
	// D�claration des constantesc
	const float IMPRIMANTE = 5.5 / 100;
	const float ORDINATEUR = 7.5 / 100;
	const float T�L�PHONE = 9.5 / 100;

	// D�claration des variables pour m�moriser les valeurs fournies par l'utilisateur
	float salaireInferieur;
	float salairesup�rieur;
	float fixe;
	float vente;
	float brut;

	//D�clarer les variables qui afficherons les r�ponse � la fin de la solution
	float total;


	//Demander � l'utilisateur de rentrer le montant fixe
	std::cout << " Veuillez entrer le montant fixe:";
	std::cin >> fixe;


	//Titre ( le comission sur les ventes
	std::cout << "Comission su les ventes " << endl;
	 
	 

	 //Demander � l'utilisateur le montant de ventes
	 std::cout << "Veuiller enter le montant des ventes:";
	 std::cin >> vente;

	 //Faire les calcules pour les taux applicable
	 if (vente/IMPRIMANTE)
	 {
	   std::cout << vente << '/' << IMPRIMANTE << " Le montant de la comission avec l'imprimante est de:" << endl;
	   std::cin >> vente;
	 }
	

	 //Calculer pour l'ordinateur
	 if (vente / ORDINATEUR)
	 {
		 std::cout << vente << '/' << ORDINATEUR << " Le montant de la comission avec l'ordinateur est de:" << endl;
		 std::cin >> vente;
     }

	 //Faire les lignes de s�paration

	 std::cout << "------------ -" << endl;

	 //Fire le total du salaire brut

	 std::cout << "Total du salaire brut :";
	 std::cin >> brut;


	return 0;
}