#include <iostream>
#include <windows.h>
#include <cstdlib>
//#include "INTERFACE.h"
using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
char *korzen;
int licznik =0;
int tura =0;
char symbol;

//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------

void gotoxy(int x, int y)
{
  COORD c;
  c.X=x-1;
  c.Y=y-1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

//-------------------------- ZMIENNE ------------------------------
    char dane[16];
    bool pusty[16];

//-------------------SPRAWDZENIE CZY KOLKO CZY KRZYZYK---------------
char* sprawdz(){

if (tura == 0)
{
    symbol = 'X';
    tura = 1;
} else if(tura == 1)
{
    symbol = 'O';
    tura = 0;
}
return &symbol;
}
//------------------- SPRAWDZENIE WYGRANEJ --------------------------
int wygrana()
{

   if(  (dane[1]==dane[2] && dane[2]==dane[3]) && (dane[1] !=NULL) ||
        (dane[4]==dane[5] && dane[5]==dane[6]) && (dane[4] !=NULL) ||
        (dane[7]==dane[8] && dane[8]==dane[9]) && (dane[7] !=NULL) ||
        (dane[1]==dane[4] && dane[4]==dane[7]) && (dane[2] !=NULL) ||
        (dane[2]==dane[5] && dane[5]==dane[8]) && (dane[5] !=NULL) ||
        (dane[3]==dane[6] && dane[6]==dane[9]) && (dane[3] !=NULL) ||
        (dane[1]==dane[5] && dane[5]==dane[9]) && (dane[1] !=NULL) ||
        (dane[3]==dane[5] && dane[5]==dane[7]) && (dane[3] !=NULL) )
   {

     cout<<"KONIEC GRY"<<endl;
    cout<<"WYGRAL GRACZ "<<tura<<endl;
    wybor = 10;
    return 0;
   }
return 1;
}
//------------------- DODAJ LICZBE DO DRZEWA ------------------------
void pole()
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

void wyswietl_drzewo()
{
system("CLS");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
//wyswietlenie pola gry

gotoxy(10,2); if (pusty[1]==true) cout<<"_"; else cout<<dane[1];
gotoxy(15,2); if (pusty[2]==true) cout<<"_"; else cout<<dane[2];
gotoxy(20,2); if (pusty[3]==true) cout<<"_"; else cout<<dane[3];
gotoxy(10,3); if (pusty[4]==true) cout<<"_"; else cout<<dane[4];
gotoxy(15,3); if (pusty[5]==true) cout<<"_"; else cout<<dane[5];
gotoxy(20,3); if (pusty[6]==true) cout<<"_"; else cout<<dane[6];
gotoxy(10,4); if (pusty[7]==true) cout<<"_"; else cout<<dane[7];
gotoxy(15,4); if (pusty[8]==true) cout<<"_"; else cout<<dane[8];
gotoxy(20,4); if (pusty[9]==true) cout<<"_"; else cout<<dane[9];
cout<<endl<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}


//----------------------- G£OWNY PROGRAM ----------------------------
int main()
{
    for (int i=1; i<=15; i++)
    {
        pusty[i]=true;
    }
    korzen=NULL;

    do
    {
   wyswietl_drzewo();
    cout<<"----------------------------------"<<endl;
    cout<<"   Gra w kolko i krzyzyk "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Wybierz pole"<<endl;
    cout<<"1 --- 2 --- 3"<<endl;
    cout<<"4 --- 5 --- 6"<<endl;
    cout<<"7 --- 8 --- 9"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Tura gracza "<<tura<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Wpisz 10 zeby zakonczyc"<<endl;
    cout<<"----------------------------------"<<endl;
    wygrana();
    cin>>wybor;
    cout<<endl;
    if (wybor > 0 && wybor < 10)
    {pole();}
    else if (wybor != 10){cout<<"Podaj liczbe w naturalna w zakresie 1-9"<<endl;}
    }while(wybor!=10);
    return 0;
}
