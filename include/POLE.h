#include "INTERFACE.h"

#ifndef POLE_H
#define POLE_H


class POLE: public INTERFACE
{
    public:
        int wybor;
        int koniec;
        int tura;
        char symbol;
        void pole(int wybor);
        char* sprawdz();
        int wygrana(int* tura,int* number);
    protected:
    private:
};

#endif // POLE_H
