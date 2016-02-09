#include "POLE.h"

//------------------- SPRAWDZENIE WYGRANEJ --------------------------
int POLE::wygrana(int *tura,int *koniec)
{

   if(  ((dane[1]==dane[2]) && (dane[2]==dane[3])) && (dane[1] !=NULL) ||
        (dane[4]==dane[5] && dane[5]==dane[6]) && (dane[4] !=NULL) ||
        (dane[7]==dane[8] && dane[8]==dane[9]) && (dane[7] !=NULL) ||
        (dane[1]==dane[4] && dane[4]==dane[7]) && (dane[4] !=NULL) ||
        (dane[2]==dane[5] && dane[5]==dane[8]) && (dane[5] !=NULL) ||
        (dane[3]==dane[6] && dane[6]==dane[9]) && (dane[3] !=NULL) ||
        (dane[1]==dane[5] && dane[5]==dane[9]) && (dane[1] !=NULL) ||
        (dane[3]==dane[5] && dane[5]==dane[7]) && (dane[3] !=NULL) )
   {

     cout<<"KONIEC GRY"<<endl;
    cout<<"WYGRAL GRACZ "<<(*tura)<<endl;
    (*koniec) = 10;
    return *koniec, *tura;
   }
return *koniec, *tura;
}
//------------------- DODAJ LICZBE DO DRZEWA ------------------------
void POLE::pole(int wybor)
{
    char *znak;
    znak = sprawdz();
    if (pusty[wybor]==true)
    {

        korzen=&dane[wybor]; //
        *korzen=*znak;
        pusty[wybor]=false;
    }
}
//-------------------SPRAWDZENIE CZY KOLKO CZY KRZYZYK---------------
char* POLE::sprawdz()
{

if ((tura) == 0)
{
    symbol = 'X';
    (tura) = 1;
} else if((tura) == 1)
{
    symbol = 'O';
    (tura) = 0;
}
return &symbol;
}
