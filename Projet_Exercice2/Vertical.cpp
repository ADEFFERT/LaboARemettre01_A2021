// But : programme qui v�rifie si un nombre � 5 chiffres et l'affiche verticalement.
// Auteur : Arnaud DEFFERT
// Date  : 2021-09-01



#include <iostream> // Pour permettre au programme d'interagir avec l'utilisateur cout, cin, 
// using namespace std; // Pour ne plus utiliser std :: et fluidifier le code 

int main() // portail d'entr�e du programme

{  // debut du bloc d'instruction
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows � la console

	// d�claration de variable

	int nombre; 

	std::cout << "Saisir un nombre � 5 chiffres :"; //On invite l'utilisateur � saisir un nombre
	std::cin >> nombre; //  on enregistre la valeur

	//si le nombre est inf�rieur � 10000 il affiche Ce nombre ne contient pas 5 chiffres.

	if (nombre < 10000)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";

	}

	//si le nombre est  sup�rieur ou �gale � 10000  et inf�rieur ou �gale � 99999 il a 5 chiffres
	if (nombre >= 10000)
		if (nombre <= 99999)


		{// bloc instruction ex�cut� si la condition est vraie

			std::cout << std::endl << nombre / 10000 % 10; //on divise le nombre par 10000 modulo 10 pour afficher des dizaine de 1000
			std::cout << std::endl << nombre / 1000 % 10; //on divise le nombre par 1000 modulo 10 pour afficher l'unite de 1000
			std::cout << std::endl << nombre / 100 % 10; //on divise le nombre par 100 modulo 10pour afficher l'unit� de 100
			std::cout << std::endl << nombre / 10 % 10; //on demande de divise le nombre par 10 modulo 10pour afficher le chiffre des dizaine
			std::cout << std::endl << nombre % 10;		//on divise le nombre par  modulo 10 pour afficher le nombre des unit�s

		}
		else
		{ //bloc instruction ex�cut� si la condition est fausse

			std::cout << "Ce nombre ne contient pas 5 chiffres."; // on indique � l'utilisateur que le nombre n'a pas 5 chiffres

		}


}// fin du bloc d'instruction
// plan de test

/*
nombre						resultat
12345						affichage vertical
1000						erreur nombre ne contient pas 5 chiffres
123456						erreur nombre ne contient pas 5 chiffres
00000						erreur nombre ne contient pas 5 chiffres
-10000						erreur nombre ne contient pas 5 chiffres
45678						affichage vertical
-1000						erreur nombre ne contient pas 5 chiffres
11111

*/