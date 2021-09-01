// But : programme qui lit, détermine et affiche s'il s'agit d'un entier pair ou impair.
// Auteur : Arnaud DEFFERT
// Date : 2021-09-01

#include <iostream> // boite à outils pour communiquer avec l'utilisateur, cout cin



int main()
{
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows à la console

	//devclaration des variables
	int nombre; 

	std::cout << "Saisir un nombre :"; //On invite l'utilisateur à saisir un nombre

	std::cin >> nombre; // on enregistre la valeur en mémoire


	if (nombre % 2 == 0) // mise en place de la condition qui vérifie si le nombre est pair ou impair
	{
		std::cout << nombre << " est un nombre pair"; //on affiche que le nombre taper par l'utilisateur est pair.
	}

	else
	{
		std::cout << nombre << " est un nombre impair"; //on affiche que le nombre taper par l'utilisateur  est impair
	}

	return 0;

}

// Plan de test

/*
nombre			resultat
1				impair
20				pair
51				impair
0				pair
-1				impair
*/
