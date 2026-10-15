#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <iostream>
#include "Image.h"
#include "Moteur.h"
using namespace std;

class Personnage{
    Image _image;
    int _x;
    int _y;

    int _fx;
    int _fy;

   int _skin_x;
    int _skin_y;

    public :

   Personnage(Image &image, int x, int y, int skin_x, int skin_y); // constructeur

    void dessiner();
    void regarderDroite();
    void regarderGauche();
    void regarderHaut();
    void regarderBas();


};


#endif
