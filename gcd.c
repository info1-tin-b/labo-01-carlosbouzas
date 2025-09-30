/**
 * Labo 01
 * Date : 24/09/2025
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 * Author : Carlos Bouzas
 */
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
  int r = 0;
  
  
  while (b != 0) {//Tant que b != 0 on continue 
    r = b;        //Sauvegarde de la variable d'entrée b
  
    b = b % a;    //Mise à jour de la variable d'entrée 
                  //avec l'opération du calcul du reste d'une division 
                  //entière par l'opérateur modulo  
    a = r;        //la variable d'entrée a récupère la valeur de la 
                  //variable d'entrée b
  }
  return a;      //Retour du resultat de la fonction 
}

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        return -1;
    }

    int a = atoi(argv[1]); // Affectation de la premiere valeur numérique
                           // entrée en ligne de commande 

    int b = atoi(argv[2]); // Affectation de la deuxième valeur numérique
                           // entrée en ligne de commande 

    int result = gcd(a, b);// Affectation de la valeur de retour de la fonction   

    //printf("%d\n", result + 5);
    printf("%d\n", result);// Affichage du résultat

    return 0;
}

