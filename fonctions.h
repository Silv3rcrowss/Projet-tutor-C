#ifndef FONCTION_H
#define FONCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <time.h>



typedef struct{
	int * grille;
	int n;
	int nb_cases_libres;
} Gratte_ciel;


  typedef enum
  {
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
  } COULEUR_TERMINAL;

void clear_terminal();
int color_printf(COULEUR_TERMINAL fg, COULEUR_TERMINAL bg, const char * format, ...);
void saisie_avec_espaces(char * chaine, int n);
Gratte_ciel* creer_gratte_ciel(int n);
void detruire_gratte_ciel(Gratte_ciel* p);
int indice_grille_valide(Gratte_ciel * p, int i);
int get_case(Gratte_ciel *p, int i, int j);
int set_case(Gratte_ciel * p,int i,int j,int val);
int get_nb_cases_libres(Gratte_ciel *p);
int est_case_bordure(Gratte_ciel * g, int i, int j);
void affichage_gratte_ciel(Gratte_ciel * p);
int nb_immeubles_visibles(Gratte_ciel * p,int i,int j);
void calcul_bordure(Gratte_ciel *p);
int valeurs_differentes_ligne ( Gratte_ciel * p, int ind);
int valeurs_differentes_colonne ( Gratte_ciel * p, int ind);
int valeurs_differentes_quartier ( Gratte_ciel * p);
int bordure_correcte(Gratte_ciel * p);
int quartier_est_solution ( Gratte_ciel * p);
int get_size(Gratte_ciel *p);
int indice_quartier_valide(Gratte_ciel *p,int i);
void permute_cases(Gratte_ciel * p,int i1,int j1,int i2,int j2);
void message();
void permute_lignes(Gratte_ciel * p, int l1, int l2);
void permute_colonnes(Gratte_ciel * p, int c1, int c2);
void permute_nombres(Gratte_ciel * p, int nb1, int nb2);
void remplir_quartier( Gratte_ciel * p);
int nombre_aleatoire(int min, int max);
void quartier_aleatoire ( Gratte_ciel * p);
Gratte_ciel * creer_gratte_ciel_aleatoire (int n);
int mouvement(Gratte_ciel * p);
void jouer(int n);





#endif