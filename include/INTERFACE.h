#include <iostream>
#include <windows.h>
#include <cstdlib>

#ifndef INTERFACE_H
#define INTERFACE_H

using namespace std;
class INTERFACE

{
    public:
    char dane[16];
    bool pusty[16];
    char *korzen;
        void settings();
        void gotoxy(int x, int y);
        void wyswietl_drzewo();
    protected:
    private:
};

#endif // INTERFACE_H
