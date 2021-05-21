//
// Created by fdhar on 20/05/2021.
//
//#include "" // j'inclus le code de pipo
#include <iostream>
#include <vector>
using namespace std;

//test
int pair = 9; // la valeur de la carte renvoyé
int doublePair = 6; // la carte la plus haute dans la double pair
int brelan = 7;// la plus haute du brelan c'est le 7
int suite = 3; // la carte la plus petite ded le suite (en compter 5)
int flush = 10; //plus haute carte
int full_house = 8;//la  carte la plus haute
int carre = 12; //la carte la plus haute
int quinteFlush = 12; //la carte la plus haute;


int joueur1 = 4;
int joueur2 = 3;

std::string joueur;

void NomsDesMain(int Score)
{

    // serie de if pour afficher les messsages
    if ( Score == 1)
    {
        std::cout << " " << joueur << "a gagne par une pair" << endl;
    }
    else if (Score == 2)
    {
        std::cout << " " << joueur << "a gagne par une double pair" << endl;
    }
    else if (Score == 3)
    {
        std::cout << " " << joueur << "a gagne par un triple" << endl;
    }
    else if (Score == 4)
    {
        std::cout << " " << joueur <<" a gagne par une suite " << endl;
    }
    else if (Score == 5)
    {
        std::cout <<  " " << joueur << "a gagne par une flush " << endl;
    }
    else if (Score == 6)
    {
        std::cout << " " << joueur  <<" a gagne par un full " << endl;
    }
    else if (Score == 7)
    {
        std::cout << " " << joueur << " a gagne par un carre " << endl;
    }
    else if (Score == 8)
    {
        std::cout << " " << joueur << " a gagne par une quinte flush " << endl;
    }
    else { cout << "Erreur la combinaison n'est pas dans la liste" << endl; }

}
int main()
{
    // je reçoit deux combinaisons venant du joueur1 et joueur2



    if (joueur1 > joueur2)
    {
        //std::cout << "joueur1 gagne" << endl; // je debug

        joueur = "joueur1";
        NomsDesMain(joueur1);
        //std::cout << joueur << endl;   //debug
    }
    else if (joueur1 < joueur2)
    {
        //std::cout << "joueur2 gagne" << endl; // je debug

        joueur = "joueur2";
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
