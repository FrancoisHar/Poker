//
// Created by fdhar on 17/05/2021.
//

#include "JeuEssai.h"
#include "Card.h"


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


public void JeuEssai1 ()
{
    // initialisation d'une main

    //std::vector<Card> main ;

    // on int la couleur de la carte

    /*for (int c = 0; c < 4, c++)
    {
        int color;
        if (c == 0) color = COEUR ;
        if (c == 1) color = CARREAU ;
        if (c == 2) color = PIQUE ;
        if (c == 3) volor = TREFLE ;

        //on int le nombre 1 pour 1 / 14 pour AS
        for (int n =0, n < 14, n++)
        {
            main.push_back(Card(color, n));
        }
    }

    std::shuffle(main.begin(), main.end(), std::mt19937 ( random_device()));

    return main ;*/

    int nombreDeJoueur = 8;


//std::vector<Card>hands;
    // plus haute carte

    std::vector<Card> hand_high;

        hand_high.push_back(Card('84', 5));
        hand_high.push_back(Card('67', 5));
        hand_high.push_back(Card('75', AS));
        hand_high.push_back(Card('80', 7));
        hand_high.push_back(Card('80', 6));


    // Pair de 5 Carreaux,Pique,Coeur, trefle
    std::vector<Card> hand_peer;

        hand_peer.push_back(Card('84', 5));
        hand_peer.push_back(Card('67', 5));
        hand_peer.push_back(Card('75', 10));
        hand_peer.push_back(Card('80', 7));
        hand_peer.push_back(Card('80', 6));


    // double pair de 7 et de 8 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_double;

        hand_double.push_back(Card('84', 7));
        hand_double.push_back(Card('67', 7));
        hand_double.push_back(Card('75', 8));
        hand_double.push_back(Card('80', 8));
        hand_double.push_back(Card('80', ROI));


    // brelan de 8 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_three_of_a_kind;

        hand_three_of_a_kind.push_back(Card('84', 8));
        hand_three_of_a_kind.push_back(Card('67', 7));
        hand_three_of_a_kind.push_back(Card('67', 8));
        hand_three_of_a_kind.push_back(Card('80', 8));
        hand_three_of_a_kind.push_back(Card('80', ROI));



    // suite de 3,4,5,6,7 carreaux, trefle, coeur, Pique
    std::vector<Card> hand_straight;

        hand_straight.push_back(Card('84', 3));
        hand_straight.push_back(Card('75', 4));
        hand_straight.push_back(Card('67', 5));
        hand_straight.push_back(Card('80', 6));
        hand_straight.push_back(Card('80', 7));


    // flush de : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_flush;

        hand_flush.push_back(Card('84', ROI));
        hand_flush.push_back(Card('84', 4));
        hand_flush.push_back(Card('84', 5));
        hand_flush.push_back(Card('84', 9));
        hand_flush.push_back(Card('84', 3));



    // full house  de  5 et 8: carreaux, trefle, coeur, Pique
    std::vector<Card> hand_full_house;

        hand_full_house.push_back(Card('75', 5));
        hand_full_house.push_back(Card('84', 5));
        hand_full_house.push_back(Card('80', 5));
        hand_full_house.push_back(Card('67', ROI));
        hand_full_house.push_back(Card('84', ROI));


    // carre de 5 : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_square;

        hand_square.push_back(Card('75', 5));
        hand_square.push_back(Card('84', 5));
        hand_square.push_back(Card('80', 5));
        hand_square.push_back(Card('67', 5));
        hand_square.push_back(Card('84', ROI));


    // quite flush : carreaux, trefle, coeur, Pique
    std::vector<Card> hand_straight_flush;//créer le vectuer

        hand_straight_flush.push_back(Card('84', 3));//insère dans le vectuer a sa dernière position
        hand_straight_flush.push_back(Card('84', 4));
        hand_straight_flush.push_back(Card('84', 5));
        hand_straight_flush.push_back(Card('84', 6));
        hand_straight_flush.push_back(Card('84', 7));

        /*

    for (int i = nombreDeJoueur; i < nombreDeJoueur + 5; i++)
        {
        hands[i].push_back(hand_straight_flush);
        hands[i].push_back(hand_peer);
        hands[i].push_back(hand_high);
        hands[i].push_back(hand_double);
        hands[i].push_back(hand_three_of_a_kind);
        }*/

    hands.push_back(hand_straight_flush);
    hands.push_back(hand_peer);
    hands.push_back(hand_high);
    hands.push_back(hand_double);
    hands.push_back(hand_three_of_a_kind);
}





