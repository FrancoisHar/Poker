#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>
#include <algorithm>
#include <vector>

#include "Card.h"

using namespace std;

int main(){
    srand(time(NULL));
    //on a le tableu de charles
    string allCard [10];

    allCard[0] = "as de coeur";
    allCard[1] = "roi de pique";
    allCard[2] = "dame de coeur";
    allCard[3] = "10 pic";
    allCard[4] = "9 pic";
    allCard[5] = "3 coeur";
    allCard[6] = "4 coeur";
    allCard[7] = "5 coeur";
    allCard[8] = "6 coeur";
    allCard[9] = "7 coeur";


    int i = 1;
    vector<int> carteDejaPrise;
    vector<string> handJ1;
    while (handJ1.size()<5){
            //on choisi un index de carte
            int indexCarte;
            indexCarte = rand() % 10;
            if(indexCarte>1){
                if (!count(carteDejaPrise.begin(), carteDejaPrise.end(), indexCarte)) {
                    handJ1.push_back(allCard[indexCarte]);
                    carteDejaPrise.push_back(indexCarte);
                }
                else{
                    cout<<"la carte a deja ete prise"<<endl;
                }
            }
            i+=1;
    }

    for(int j = 0; j<handJ1.size();j++){
            cout<<"la carte n "<<j<<" est : "<<handJ1[j]<<endl;
    }
}
