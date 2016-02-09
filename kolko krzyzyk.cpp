#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "INTERFACE.h"
#include "POLE.h"
using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int tura= 0;
int koniec = 0;
char gracz = 'X';

//-------------------------- ZMIENNE ------------------------------

    INTERFACE i = INTERFACE();
    POLE p = POLE();


//----------------------- G£OWNY PROGRAM ----------------------------
int main()
{



    p.settings();
   // createINTERFACE();
    do
    {
        p.wyswietl_drzewo();
            cout<<"----------------------------------"<<endl;
            cout<<"   Gra w kolko i krzyzyk "<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Wybierz pole"<<endl;
            cout<<"1 --- 2 --- 3"<<endl;
            cout<<"4 --- 5 --- 6"<<endl;
            cout<<"7 --- 8 --- 9"<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Tura gracza "<<gracz<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Wpisz 10 zeby zakonczyc"<<endl;
            cout<<"----------------------------------"<<endl;
        p.wygrana(&tura,&koniec);
        if(koniec==10){break;}
        else{
            cin>>wybor;
            cout<<endl;
            if (wybor > 0 && wybor < 10)
            {
                p.pole(wybor);
               // gracz =

            }
            else if (wybor != 10)
            {
                cout<<"Podaj liczbe w naturalna w zakresie 1-9"<<endl;
            }
        }
    }
    while(koniec!=10);
    return 0;
}
