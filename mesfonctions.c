//
// Created by Isabelle on 29/09/2021.
//
#include <stdio.h>

int getMax( int entier1, int entier2)
{
    if (entier1 < entier2) {
        return entier2;
    } else if (entier2 < entier1) {
        return entier1;
    } else {
        return entier1;
    }
}


int calculPerimetre (int largeur, int longueur){
    int perimetre = (longueur + largeur)* 2;
    return perimetre;
}

int saisirEntier2 (){
    int entier3;
    printf("Entrez un entier:\n");
    scanf("%d", &entier3);
    return entier3;
}

int calculAire ( int largeur, int longueur){
    int aire = largeur * longueur;
    return aire;
}

int multiple(int c, int d){

}