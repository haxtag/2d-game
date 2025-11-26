#include <vector>

#include "Moteur.h"
#include "Image.h"

using namespace std;

int main(int, char**) // Version special du main, ne pas modifier
{
  // Initialisation du jeu
  Moteur moteur("Mon super jeu vidéo");

  // TODO: charger images, creer personnages, etc.
    Image fond(moteur,"assets/fond.png");
    Image coffref(moteur,"assets/coffre_ferme.png");
    Image coffreo(moteur,"assets/coffre_ouvert.png");

  bool quitter = false;
  bool ouvert=false;
  int pix1=0;
  int pix2=0;

  // Boucle de jeu, appelee a chaque fois que l'ecran doit etre mis a jour
  // (en general, 60 fois par seconde)
  while (!quitter)
  {
    // I. Gestion des evenements
    Evenement evenement = moteur.evenementRecu();
    while (evenement != AUCUN)
    {
      switch (evenement)
      {
        // QUITTER = croix de la fenetre ou Echap
        case QUITTER_APPUYE:
          quitter = true;
          break;
        // TODO: gerer les autres evenements
        case ESPACE_APPUYE:
            ouvert=true;
            pix1+=5;
            pix2+=5;
            break;
        case ESPACE_RELACHE:
            ouvert=false;
            break;
        default:
          break;
      }

      evenement = moteur.evenementRecu();
    }

    // II. Mise à jour de l'état du jeu

    // TODO: faire bouger vos personnages, etc.

    // III. Generation de l'image à afficher


    moteur.initialiserRendu(); // efface ce qui avait ete affiche precedemment et reinitalise en ecran noir

    // TODO: afficher vos personnages, objets, etc.
        fond.dessiner(0,0);

        if(ouvert==false){
                coffref.dessiner(pix1,pix2);
        }

        if(ouvert==true){
        coffreo.dessiner(pix1,pix2);
        }




    /*
      Affiche l'image en se cadencant sur la frequence de
      rafraichissement de l'ecran (donc va en general mettre le
      programme en pause jusqu'a ce que l'ecran soit rafraichi). En
      general, 60 images fois par seconde, mais ca peut dependre du
      materiel
    */
    moteur.finaliserRendu();
  }

  return 0;
}
