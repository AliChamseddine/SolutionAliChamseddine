//but:Une société de vente de matériel informatique rémunère ses représentants commerciaux à la commission. Les
//représentants reçoivent 299 $ par semaine plus un pourcentage selon le secteur où est affecté le représentant :
//• 5.5 % de leurs ventes brutes par semaine si le représentant est au secteur i ou I pour Imprimante,
//• 7.5 % de leurs ventes brutes par semaine si le représentant est au secteur O ou o pour Ordinateur,
//• 9.5 % de leurs ventes brutes par semaine si le représentant est au secteur T ou t pour Téléphone ou Tablette,
//De plus, un pourcentage est retenu sur le salaire pour payer les impôts.
//• 15 % si le salaire par semaine est inférieur à 700 $
//• 20 % si le salaire par semaine est compris entre 700 $

//Auteur:Ali Chamseddine
//Date: 2020-10-13



#include <iostream>				// Intègre un coffre à outils (cout, cin, ...) pour parler avec l'utilisateur

using namespace std;  // Pour éviter de marqer std dans les instructions

int main()
{

	// Pour gérer les caractères accentués
	setlocale(LC_ALL, "");

	//Première lecture de l'énoncé
	// Déclaration des constantesc
	const float IMPRIMANTE = 5.5 / 100;
	const float ORDINATEUR = 7.5 / 100;
	const float TÉLÉPHONE = 9.5 / 100;

	// Déclaration des variables pour mémoriser les valeurs fournies par l'utilisateur
	float salaireInferieur;
	float salairesupérieur;
	float fixe;
	float vente;
	float brut;

	//Déclarer les variables qui afficherons les réponse à la fin de la solution
	float total;


	//Demander à l'utilisateur de rentrer le montant fixe
	std::cout << " Veuillez entrer le montant fixe:";
	std::cin >> fixe;


	//Titre ( le comission sur les ventes
	std::cout << "Comission su les ventes " << endl;
	 
	 

	 //Demander à l'utilisateur le montant de ventes
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

	 //Faire les lignes de séparation

	 std::cout << "------------ -" << endl;

	 //Fire le total du salaire brut

	 std::cout << "Total du salaire brut :";
	 std::cin >> brut;


	return 0;
}