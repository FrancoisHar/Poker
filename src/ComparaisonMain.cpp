//
// Created by fdhar on 20/05/2021.
//
//#include "" // j'inclus le code de pipo
#include <iostream>
#include <vector>
using namespace std;

int joueur1 = 4;
int joueur2 = 7;

void NomsDesMain(int Score)
{

    // serie de if pour afficher les messsages
    if ( Score == 2 )
    {
        std::cout << "... a gagne par une pair" << endl;
    }
    else if (Score == 3)
    {
        std::cout << "... a gagne par un triple" << endl;
    }
    else if (Score == 4)
    {
        std::cout << "... a gagne par une double pair " << endl;
    }
    else if (Score == 5)
    {
        std::cout << "... a gagne par une full house " << endl;
    }
    else if (Score == 6)
    {
        std::cout << "... a gagne par un carre " << endl;
    }
    else { cout << "Erreur la combinaison n'est pas dans la liste" << endl; }

}
int main()
{
    // je reçoit deux combinaisons venant du joueur1 et joueur2



    if (joueur1 > joueur2)
    {
        std::cout << "joueur1 gagne" << endl; // je debug
        NomsDesMain(joueur1);
    }
    else if (joueur1 < joueur2)
    {

        std::cout << "joueur2 gagne" << endl; // je debug
        NomsDesMain(joueur2);
    }
    else if (joueur1=joueur1)
    {
        std::cout << "egalite (pair ou autre)" << endl; // je debug
        //je dois definir l'égalité mais pour ça je dois avoir plus d'information sur les cartes.
    }
    else
        std::cout << "Erreur ! cette combinaison n'est pas possible." << endl; // je debug


}
