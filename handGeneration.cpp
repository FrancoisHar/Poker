#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <array>

#include "Card.h"
//#include "handGeneration.h"
using namespace std;
/*
vector<Card> GenerJeuxCarte(){
    vector<Card> JeuxCarte;//on crée le vecteur où seront stocker les cartes
    int carte;
    int tmp = 0;
    for(int a = 1; a<5; a++){//on créer toutes les cartes
        for(int i = 2 ; i < 15; i++){
            if (a==1){
                carte = 67;
               // cout << carte << endl;
            }else if (a==2){
             carte = 75;
                       //      cout << carte << endl;
            }else if (a==3){
             carte = 80;
                      //       cout << carte << endl;
            }else if (a==4){
             carte = 84;
                           //  cout << carte << endl;
            }
            JeuxCarte.push_back(Card(carte,i));  //on stocke la carte créé
            cout << JeuxCarte[tmp] <<endl;
            tmp = tmp+1;
    }
}
return JeuxCarte;//on revoie tout le deck
}

//vector<int> carteDejaPrise;//on créer une variable global pour toutes les cartes prise
//vector<Card> JeuxCarte= GenerJeuxCarte();//on stoke le jeux de cartes

vector<Card> handGeneration(){
    cout<<"Création d'une main...\n";
    srand(time(NULL));//on initiallise l'aléatoire
    vector<Card> handJ1;//on créer la variable main
    if(carteDejaPrise.size()<46){//on regarde s'il y a suffisament de cartes
    while (handJ1.size()<5){//on sort de la boucle lorsque l'on a 5 cartes
            //on choisi un index de carte
            int indexCarte;
            indexCarte = rand() % 52;//on choisit aléatoirement une carte

                if (!count(carteDejaPrise.begin(), carteDejaPrise.end(), indexCarte)) {//on vérifie si la carte n'est pas déjà prise
                    handJ1.push_back(JeuxCarte[indexCarte]);//on stocke la carte dans la main
                    carteDejaPrise.push_back(indexCarte);//on retient que la cartes est prise
                }
            }

    }else{cout<<"Nombre de joueur limite atteint";}
    for(int j = 0; j<handJ1.size();j++){
            cout<<"la carte n "<<j<<" est : "<<handJ1[j]<<endl;//on regarde une main génénrer
    }
    return handJ1;//on revoie la main
}*/

int hauteur(vector <Card> hand){
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());
    return isSuite[4];
}

int color(vector <Card> hand){
    vector <int> lesCouleursDesCartes;
    for(int i =0;i<5;i++){
        lesCouleursDesCartes.push_back(hand[i].Getm_color());
    }
    if(count(lesCouleursDesCartes.begin(),lesCouleursDesCartes.end(),lesCouleursDesCartes[1])==5){
        cout<<"C'est un full YOUPI!";
        return 1;
    }
    else{return 0;}
}

int suite(vector <Card> hand){
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());
    if(isSuite[0]+1==isSuite[1]&&isSuite[0]+2==isSuite[2]&&isSuite[0]+3==isSuite[3]&&isSuite[0]+4==isSuite[4]){
        cout<<"La suite est ok";
        return 1;
    }else{
        cout<<"Ce n'est pas une suite";
        return 0;}

}

int doublet(vector <Card> hand){
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());
    for(int i=0;i<5;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==2){
            cout<<"un double est survenue\n";
        return 1;
        }
    }
return 0;
}

int brelan(vector <Card> hand){
vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());

    for(int i=0;i<5;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==3){
                cout<<"un brelan est apparue\n";
                return 1;
        }
    }
return 0;
}

int carre(vector <Card> hand){
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());

    for(int i=0;i<5;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==4){
                cout<<"un carre est apparue";
                return 1;
        }
    }
return 0;
}

int full(vector <Card> hand){//brelan + paire
    vector <int> isSuite;
    bool isBrelan;
    bool isDoublet;
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());

    for(int i=0;i<3;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==3){
                isBrelan = 1;
        }
    }
    for(int i=0;i<5;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==2){
            isDoublet =1;
        }
    }
    if (isBrelan && isDoublet){
        cout<<"C'est un full";
        return 1;
    }
return 0;
}

int doublePaire(vector <Card> hand){//c'est une double paire tout est dans le nom lol
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    int isDouble;
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());
    int i=0;
    for(i;i<4;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==2){
                isDouble=1;
                break;
        }
    }
    i+=1;
    for (i;i<4;i++){
        if(count(isSuite.begin(),isSuite.end(),isSuite[i])==2){
                isDouble=2;
        }
    }
    if (isDouble == 2){
        cout<<"C'est une double paire";
        return 1;
    }
return 0;
}

int quinteFlush(vector <Card> hand){//suite + color
    vector <int> isSuite;//il faut les trier dans l'ordre croissant avant
    bool cUneSuite;
    bool isColor;
    for(int i = 0; i<5;i++){
        isSuite.push_back(hand[i].Getm_value());
    }
    sort(isSuite.begin(),isSuite.end());
    if(isSuite[0]+1==isSuite[1]&&isSuite[0]+2==isSuite[2]&&isSuite[0]+3==isSuite[3]&&isSuite[0]+4==isSuite[4]){
        cUneSuite =1;
    }
    vector <int> lesCouleursDesCartes;
    for(int i =0;i<5;i++){
        lesCouleursDesCartes.push_back(hand[i].Getm_color());
    }
    if(count(lesCouleursDesCartes.begin(),lesCouleursDesCartes.end(),lesCouleursDesCartes[1])==5){
        isColor = 1;
    }
    if(cUneSuite&&isColor){
        cout<<"C'est une quinteFlush";
        return 1;
    }

return 0;
}

int main(){
    //handGeneration();
    vector <Card> laMain;
    laMain.push_back(Card(COEUR,2));
    laMain.push_back(Card(COEUR,3));
    laMain.push_back(Card(COEUR,4));
    laMain.push_back(Card(COEUR,5));
    laMain.push_back(Card(COEUR,6));

    //hauteur(laMain);
    //doublet(laMain);
    //doublePaire(laMain);
    //brelan(laMain);
    //suite(laMain);
    //color(laMain);
    //full(laMain);
    //carre(laMain);
    //quinteFlush(laMain);  //PAS FAITE
}
