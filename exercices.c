//
// Created by Isabelle on 29/09/2021.
//
/*prototype exercice 1
 * IN = entier
 * out = entier */
#ifndef UNTITLED3_MESFONCTIONS_H
#define UNTITLED3_MESFONCTIONS_H

#endif //UNTITLED3_MESFONCTIONS_H

#include <stdio.h>
#include "mesfonctions.h"
#include "exercices.h"

//exercice1:
int exercice1() {
    int a;
    int b;
    printf("Entrez un entier:\n");
    scanf("%d", &a);
    printf("Entrez un deuxieme entier :\n");
    scanf("%d", &b);
    getMax(a, b);
    printf("L'entier le plus grand est %d.\n", getMax());
    return 0;
}

//exercice2
int exercice(){
    saisirEntier2();
    return 0;
}


//exercice3
int exercice3(){
    int largeur;
    int longueur;
    calculPerimetre(saisirEntier2(), saisirEntier2());
    printf("Votre périmètre est %d.\n", calculPerimetre());
    calculAire(saisirEntier2(), saisirEntier2());
    printf("L'aire du rectangle est de %d", calculAire());
    return 0;
}

//exercice4
int exercice4(){
    saisirEntier2();
    multiple(saisirEntier2(), saisirEntier2());
}

