#include "Personnage.h"
#include <iostream>
#include "Image.h"
#include "Moteur.h"
using namespace std;


Personnage::Personnage(Image &image, int x, int y,int skin_x, int skin_y){
    _image = image;
    _x = x;
    _y = y;
    _skin_x = skin_x;
    _skin_y = skin_y;
    _fx=(_skin_x)*16;
    _fy=(_skin_y)*16;

}


  void Personnage::dessiner(){
       _image.dessiner(_x,_y,_fx,_fy,16,16);
//     _image.dessiner(_x,_y,64,16,16,16);    // Gauche
//     _image.dessiner(_x,_y,64,32,16,16);    // droite
//     _image.dessiner(_x,_y,64,48,16,16);    // Regarde vers le haut


}

  void Personnage::regarderDroite(){
       _fx= (_skin_x)*16;
       _fy= (_skin_y+2)*16;


      }

  void Personnage::regarderGauche(){
       _fx= (_skin_x)*16;
       _fy= (_skin_y+1)*16;
      }

    void Personnage::regarderHaut(){
       _fx= (_skin_x)*16;
       _fy= (_skin_y+3)*16;

        }
    void Personnage::regarderBas(){
       _fx= (_skin_x)*16;
       _fy= (_skin_y)*16;
        }

