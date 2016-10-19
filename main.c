#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

//nbcorvette 1 taille 1par1
//nbdestroyer 2 taille 1par3
//nbcroiseur 2 taille 1par4
//nbporteavion 1 taille 1 par 6

#define ID 4
#define ID_corvette 1
#define ID_destroyeur 2
#define ID_croiseur 3
#define ID_portavion 4
#define taillecorvette 1
#define tailledestroyer 3
#define taillecroiseur 4
#define tailleportavion 6






//void waitFor (unsigned int secs) {
    //unsigned int retTime = time(0) + secs;   // Get finishing time.
    //while (time(0) < retTime);

int main()
{

    int corvette = 0;
    int destroyer = 0;
    int croiseur = 0;
    int portavion = 0;
    int i = 0;
    int j = 0;
    int tabJoueur1[10][10] = {0};
    int tabJoueur2[10][10] = {0};
    int x1 = 0;
    int y1 = 0;
    int x = 0;
    int y = 0;
    int nombrebateauxJ1 = 0;
    int nombrebateauxJ2 = 0;
    int valide = 0; //booleen
    int tourJ1 = 1;
    int fini = 0;
    int id = 1;
    int menu = 0;

    printf("###################\n");
    printf("#~~~~~~~~~~~~~~~~~#\n");
    printf("# Bataille navale #\n");
    printf("#~~~~~~~~~~~~~~~~~#\n");
    printf("###################\n");


    printf("appuyer sur 1 pour jouer\n");
    printf("appuyer sur 0 pour quitter\n");
        switch(menu){
            case 1 :

                break;
            case 0 :

                break;
        }















    for(x = 0 ; x < 10 ; x++){
        for(y = 0 ; y < 10 ; y++){
            printf(" %d   " , tabJoueur1[x][y]);
        }
        printf("                           \n");
        printf("\n");
    }






    printf("Placer la corvette\n");
    printf("Coordonnees(x)");
    scanf("%d", x);
    printf("coordonnees(y)");
    scanf("%d", y);
    if((x <= 10 || x >= 1 ) || (y <= 10 || y >= 1)){
        tabJoueur1[x][y] = (8);
    }






//while(fini == 0){
   // if(tourJ1 == 1){
       // printf("Rentrer coordonnees(X) de la cible:\n");
       // scanf("%d", &x);
      //  printf("Rentrer coordonnees(Y) de la cible:\n");
       // scanf("%d", &y);
       // while(tabJoueur2(x1)(y1) == -1 || tabJoueur2(x1)(y1) == 2){
         //   if(tabJoueur2(x1)(y1) == 1){
          //      printf("touché");
            //    tabJoueur2(x1)(y1) = 2
           //     else{
             //       printf("a l'eau")
              //      tabJoueur2(x1)(y1) == -1


              //  }
            //}
           // else{
            //    printf("Rentrer coordonnees(X) de la cible:\n");
            //    scanf("%d", &x1);
             //   printf("Rentrer coordonnees(Y) de la cible:\n");
             //   scanf("%d", &y1);
              //  while
          //  }
        //}
    }
//}


//}


//}


//int doRand(int lignes, int colonnes){
    //waitFor(0.05);
    //srand(time(NULL)*rand());
    //if(lignes >= 1 && colonnes >= 1){
        //return rand() % 2;
    //}else{
        //return (rand() % ((colonnes + lignes -1)) + lignes);
   // }
//}



//void waitFor (unsigned int secs) {
    //unsigned int retTime = time(0) + secs;   // Get finishing time.
   // while (time(0) < retTime);
