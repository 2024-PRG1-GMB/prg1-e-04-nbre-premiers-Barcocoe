//
// Created by cocor on 04.10.2024.
//

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    char decision_user;

    do {

        int nbr_user ;

        do {

            cout << "Veuillez entrez un nombre entre 2 et 1000 :" << endl;
            cin >> nbr_user;

        } while (nbr_user < 2 || nbr_user > 1000);          // Répètition tant que l'utilisateur n'a pas entrer la bonne valeur

        int compteur = 0;                                   // Initialisation du nombre d'éléments par ligne

        for (int i = 2; i <= nbr_user; ++i) {               // Check tous les nombres entre 2 et le nombre inséré par l'utilisateur

            for (int j = 2; j <= i; ++j) {                  // Test si le nombre n'est divisible que par lui même

                if(i % j == 0 and i != j) {                 // Arret de la boucle imbriquée si le nombre est divisible par un autre nombre

                    break;

                }

                if (i % j == 0 and i == j){                 // Affiche le nombre s'il est divisible par lui même

                    cout << '\t' << i << " ";
                    compteur++;

                    if (compteur == 5) {                    // Mise en page : Met un retour à la ligne quand le compteur atteint 5 éléments
                        cout << endl;
                        compteur = 0;
                    }

                }

            }

        }

        do {

            cout << '\n' << "Entrez 'O' pour recommencer le programme ou 'N' pour quitter le programme." << endl;
            cin >> decision_user;

        }while (decision_user < 'N' || decision_user > 'O');

    }while(decision_user == 'O');

        return EXIT_SUCCESS;
}