#include "INTERFACE.h"

//-------- USTAWIENIA POCZATKOWE -----------------------------------
void INTERFACE::settings()
{
    korzen=NULL;
        for (int i=1; i<=15; i++)
    {
        pusty[i]=true;

    }
}
//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------

void INTERFACE::gotoxy(int x, int y)
{
  COORD c;
  c.X=x-1;
  c.Y=y-1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
//-------- VOID WYSWIETLAJACY PLANSZE --------
void INTERFACE::wyswietl_drzewo()
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

