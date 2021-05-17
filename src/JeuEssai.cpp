//
// Created by fdhar on 17/05/2021.
//

#include "JeuEssai.h"
#include "Card.h"

//
// Created by fdhar on 17/05/2021.
//

#include "JauEssai.h"

//
// Created by fdhar on 17/05/2021.
//

#include "jeuEssai.h"
#include <iostream>
#include <vector>
#include <stdexcept> // invalid_argument
#include <algorithm> // for_each

#include "../include/Card.h"
#include "../main.cpp"
#include "../src/Card.cpp"

using namespace std;

/*
Les noms :

- hand_high
- hand_peer
- hand_double
- hand_three_of_a_kind
- hand_straight
- hand_flush
- hand_full_house
- hand_square
- hand_straight_flush

*/


void JeuEssai1 ()
{
    std::vector<Card> main ;

    // on int la couleur de la carte

    for (int c = 0; c < 4, c++)
    int color;
    {
    if (c == 0) color = COEUR ;
    if (c== 1) color = CARREAU ;
    if (c == 2) color = PIQUE ;
    if (c == 3) volor = TREFLE
    }


    int nombreDeJoueur =8 ;

    // plus haute carte
    std::vector<Card> hand_high;

        hand.push_back(Card('T', 5));
        hand.push_back(Card('C', 5));
        hand.push_back(Card('C', AS));
        hand.push_back(Card('P', 7));
        hand.push_back(Card('P', 6));


    // Pair de 5 Carreaux,Pique,Coeur, trefle
    std::vector<Card> hand_peer;

        hand.push_back(Card('T', 5));
        hand.push_back(Card('C', 5));

        hand.push_back(Card('C', 10));
        hand.push_back(Card('P', 7));
        hand.push_back(Card('P', 6));


    // double pair de 7 et de 8 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_double;

        hand.push_back(Card('T', 7));
        hand.push_back(Card('C', 7));
        hand.push_back(Card('C', 8));
        hand.push_back(Card('P', 8));
        hand.push_back(Card('P', ROI));


    // brelan de 8 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_three_of_a_kind;

        hand.push_back(Card('T', 8));
        hand.push_back(Card('C', 7));
        hand.push_back(Card('C', 8));
        hand.push_back(Card('P', 8));
        hand.push_back(Card('P', ROI));



    // suite de 3,4,5,6,7 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_straight;

        hand.push_back(Card('T', 3));
        hand.push_back(Card('C', 4));
        hand.push_back(Card('C', 5));
        hand.push_back(Card('P', 6));
        hand.push_back(Card('P', 7));


    // flush de : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_flush;

        hand.push_back(Card('T', ROI));
        hand.push_back(Card('T', 4));
        hand.push_back(Card('T', 5));
        hand.push_back(Card('T', 9));
        hand.push_back(Card('T', 3));



    // full house  de  5 et 8: carreaux, trefle, coeur, Pique
    std::vector<Card> hand_full_house;

        hand.push_back(Card('C', 5));
        hand.push_back(Card('T', 5));
        hand.push_back(Card('P', 5));
        hand.push_back(Card('C', ROI));
        hand.push_back(Card('T', ROI));


    // carre de 5 : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_square;

        hand.push_back(Card('CA', 5));
        hand.push_back(Card('T', 5));
        hand.push_back(Card('P', 5));
        hand.push_back(Card('CO', 5));
        hand.push_back(Card('T', ROI));


    // quite flush : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_straight_flush;

        hand.push_back(Card('T', 3));
        hand.push_back(Card('T', 4));
        hand.push_back(Card('T', 5));
        hand.push_back(Card('T', 6));
        hand.push_back(Card('T', 7));

}




